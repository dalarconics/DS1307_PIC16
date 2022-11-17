/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA0
#define LED2_LAT                  LATAbits.LATA0
#define LED2_PORT                 PORTAbits.RA0
#define LED2_WPU                  WPUAbits.WPUA0
#define LED2_OD                   ODCONAbits.ODCA0
#define LED2_ANS                  ANSELAbits.ANSA0
#define LED2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED2_GetValue()           PORTAbits.RA0
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA1
#define LED3_LAT                  LATAbits.LATA1
#define LED3_PORT                 PORTAbits.RA1
#define LED3_WPU                  WPUAbits.WPUA1
#define LED3_OD                   ODCONAbits.ODCA1
#define LED3_ANS                  ANSELAbits.ANSA1
#define LED3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED3_GetValue()           PORTAbits.RA1
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED3_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISAbits.TRISA2
#define LED4_LAT                  LATAbits.LATA2
#define LED4_PORT                 PORTAbits.RA2
#define LED4_WPU                  WPUAbits.WPUA2
#define LED4_OD                   ODCONAbits.ODCA2
#define LED4_ANS                  ANSELAbits.ANSA2
#define LED4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED4_GetValue()           PORTAbits.RA2
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISAbits.TRISA3
#define LED5_LAT                  LATAbits.LATA3
#define LED5_PORT                 PORTAbits.RA3
#define LED5_WPU                  WPUAbits.WPUA3
#define LED5_OD                   ODCONAbits.ODCA3
#define LED5_ANS                  ANSELAbits.ANSA3
#define LED5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED5_GetValue()           PORTAbits.RA3
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RB0_CH aliases
#define RB0_CH_TRIS                 TRISBbits.TRISB0
#define RB0_CH_LAT                  LATBbits.LATB0
#define RB0_CH_PORT                 PORTBbits.RB0
#define RB0_CH_WPU                  WPUBbits.WPUB0
#define RB0_CH_OD                   ODCONBbits.ODCB0
#define RB0_CH_ANS                  ANSELBbits.ANSB0
#define RB0_CH_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_CH_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_CH_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_CH_GetValue()           PORTBbits.RB0
#define RB0_CH_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_CH_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_CH_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_CH_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_CH_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define RB0_CH_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define RB0_CH_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_CH_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISCbits.TRISC3
#define SDA_LAT                  LATCbits.LATC3
#define SDA_PORT                 PORTCbits.RC3
#define SDA_WPU                  WPUCbits.WPUC3
#define SDA_OD                   ODCONCbits.ODCC3
#define SDA_ANS                  ANSELCbits.ANSC3
#define SDA_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SDA_GetValue()           PORTCbits.RC3
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SDA_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISCbits.TRISC4
#define SCL_LAT                  LATCbits.LATC4
#define SCL_PORT                 PORTCbits.RC4
#define SCL_WPU                  WPUCbits.WPUC4
#define SCL_OD                   ODCONCbits.ODCC4
#define SCL_ANS                  ANSELCbits.ANSC4
#define SCL_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SCL_GetValue()           PORTCbits.RC4
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SCL_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/