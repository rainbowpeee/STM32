
/**
  ******************************************************************************
  * @file    ������ģ����Գ���
  * @author  dotod
  * @version V1.0
  * @date    10-DEC-2017
  * @brief   Main program body.
  ******************************************************************************
  * @attention	��ʱ����
  *
  ******************************************************************************
  */ 
	
#ifndef __DELAY_H
#define __DELAY_H

/* Includes -----------------------------------------------------------------*/
#include "stm32f10x.h"
#include "main.h"
/* �궨�� -------------------------------------------------------------------*/
#define uchar unsigned char
#define uint unsigned int
	
/* �������� ------------------------------------------------------------------*/
void delay_us( u32 nus );
void delay_ms( u16 nms );
/* �������� ------------------------------------------------------------------*/


#endif