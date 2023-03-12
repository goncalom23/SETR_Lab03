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
    struct FIFO *next;
}FIFO;

extern struct FIFO* head;
void MyFIFOInit();
void MyFIFOInsert(uint32_t data);
uint32_t MyFIFOPeep(void);

#endif
