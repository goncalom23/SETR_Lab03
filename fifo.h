/**
 * \file:   fifo.h
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:47 AM
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
#include<time.h>

#ifndef fifo_H
#define fifo_H

struct FIFO  
{
    uint32_t data;
    uint8_t flag_data_used;
    struct FIFO *next;
}FIFO;

extern struct FIFO* head;
extern uint32_t FIFO_size;
void MyFIFOInit();
void MyFIFOInsert(uint32_t data);
uint32_t MyFIFOPeep(void);
uint32_t MyFIFOSize(void);
void MyFIFORemove(void);

#endif
