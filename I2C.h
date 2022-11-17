/* 
 * File:   I2C.h
 * Author: diegoalarcon
 *
 * Created on November 10, 2022, 8:08 AM
 */

#ifndef I2C_H
#define	I2C_H

#include"mcc_generated_files/mcc.h"

#ifdef	__cplusplus
extern "C" {
#endif

void I2C_Init(void);
void I2C_Start(void);
void I2C_ReStart(void);
void I2C_Stop(void);
void I2C_Wait(void);
void I2C_Write(uint8_t val);
uint8_t I2C_Read(uint8_t ack);


#ifdef	__cplusplus
}
#endif

#endif	/* I2C_H */

