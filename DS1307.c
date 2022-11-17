#include "DS1307.h"

void DS1307_Init(void) {      
    
    I2C_Start();    
    I2C_Write(rtc_write_addr);
    I2C_Write(0x07);
    
    I2C_Write(0x10);
    __delay_ms(20);
    I2C_Stop();
}

void DS1307_SetUp(void) {
    I2C_Start();
    I2C_Write(rtc_write_addr);
    I2C_Write(0x00);
    
    I2C_Write(Segundo);
    __delay_ms(20);
    I2C_Write(Minuto);
    __delay_ms(20);
    I2C_Write(Hora);
    __delay_ms(20);
    I2C_Write(DiaSemana);
    __delay_ms(20);
    I2C_Write(Dia);
    __delay_ms(20);
    I2C_Write(Mes);
    __delay_ms(20);
    I2C_Write(Anho);
    __delay_ms(20);
    I2C_Stop();
}

void DS1307_Read(void) {
    I2C_Start();
    I2C_Write(rtc_write_addr);
    I2C_Write(0x0);

    I2C_ReStart();
    I2C_Write(rtc_read_addr);

    // Reading time from RTC
    I2C_Read(0);
    I2C_Read(0);
    I2C_Read(0);
    I2C_Read(0);
    I2C_Read(0);
    I2C_Read(0);
    I2C_Read(1);
    I2C_Stop();            

}

uint8_t DS1307_ReadCH(void) {
    uint8_t ch = RB0_CH_GetValue();
    
    return ch;

}