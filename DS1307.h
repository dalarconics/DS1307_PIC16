/* 
 * File:   DS1307.h
 * Author: diegoalarcon
 *
 * Created on November 10, 2022, 8:08 AM
 */

#ifndef DS1307_H
#define	DS1307_H

#define rtc_read_addr   (0xD1)    // 1101001 R(1) 
#define rtc_write_addr  (0xD0)    // 1101000 W(0) 

#include"mcc_generated_files/mcc.h"
#include "I2C.h"

#ifdef	__cplusplus
extern "C" {
#endif
uint8_t Segundo = 0;
uint8_t Minuto = 0x15;
uint8_t Hora = 0x12;
uint8_t DiaSemana = 4;
uint8_t Dia = 0x10;
uint8_t Mes = 0x11;
uint8_t Anho = 0x22;
    
void DS1307_Init(void);
void DS1307_SetUp(void);
void DS1307_Read(void);
uint8_t DS1307_ReadCH(void);



#ifdef	__cplusplus
}
#endif

#endif	/* DS1307_H */

