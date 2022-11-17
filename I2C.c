#include "I2C.h"

void I2C_Init(void) {
//==============================================================================
//        I2C HW-INIT
//==============================================================================        

    /**
    LATx registers
    */
    // LATC = 0x01;

    /**
    TRISx registers
    */
    // TRISC = 0xFE;

    /**
    ANSELx registers
    */
    // ANSELC = 0xE7;
    
    /**
    WPUx registers
    */
    // WPUC = 0x00;
    
    SSP2DATPPS = 0x13;   //RC3->MSSP2:SDA2;    
    RC3PPS = 0x17;   //RC3->MSSP2:SDA2;    
    RC4PPS = 0x16;   //RC4->MSSP2:SCL2;    
    SSP2CLKPPS = 0x14;   //RC4->MSSP2:SCL2;    
    
    SSP2STAT = 0x80;    // SMP: SLEW RATE CONTROL IS ENABLED FOR HIG-SPEED MODE (100KHZ/1MHZ)
    SSP2CON1 = 0x08;    // I2C Master mode: Clock = FOSC/(4 * (SSPxADD + 1))
                        
    SSP2CON2 = 0x00;    // COMUNICATION CONTROL S,RS,P,ACK             
    SSP2ADD  = 0x04;    // 400khz@8MHZ FCY  

    PIR3bits.SSP1IF = 0;
    SSP2CON1bits.SSPEN = 1; // SSPEN = 1 -> 0010 (ENABLE MSSP)
    
}

void I2C_Start(void) {        
    SSP2CON2bits.SEN2 = 1;   // Initiate start condition
    while(SEN2);            // Wait for start condition to complete
    PIR3bits.SSP2IF = 0;    // Clear SSP Interrupt flag
}

void I2C_ReStart(void) {    
    SSP2CON2bits.RSEN2 = 1;   // Initiate repeated-start condition
    while(RSEN2);            // Wait for start condition to complete
    PIR3bits.SSP2IF = 0;    // Clear SSP Interrupt flag
}

void I2C_Stop(void) {
    SSP2CON2bits.PEN2 = 1;  // INITIATE STOP CONDITION (ACK OR NACK)
    while(PEN2);
}

void I2C_Write(uint8_t val) {
    
    SSP2BUF = val;          // Send the slave address and R/W bit            
    while(!SSP2IF);         // Wait acknowledge. SSPIF is set every 9th bit
    PIR3bits.SSP2IF = 0;    // Clear SSP Interrupt flag
    if(SSP2CON2bits.ACKSTAT2) {
        SSP2CON2bits.PEN2 = 1;     // Initiate Stop Condition
        while(PEN2);               // Wait for condition to complete
        return;
    }
}

uint8_t I2C_Read(uint8_t ack) {
    uint8_t receive = 0;              // Temporary holder for data byte

    SSP2CON2bits.RCEN2 = 1;        // Enables Receive mode for I2C
    while(!SSP2STATbits.BF2);       // wait for the recieve to complete
    receive = SSP2BUF;             // Save the data byte

    SSP2CON2bits.ACKDT2 = ack;       // ACK(0) ou NOT_ACK(1)
    SSP2CON2bits.ACKEN2 = 1;        // Transmit ACKDT data bit. Automatically cleared by hardware.
    while(ACKEN2);                  // Wait for Nack to complete
    
    return receive;

}

void I2C_Wait(void) {
    while(SSP2STATbits.R_nW)
        continue;
    if(SSP2CON2bits.ACKSTAT2)
        I2C_Stop();
}
