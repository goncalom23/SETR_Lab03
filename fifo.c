/**
 * \file:   fifo.c
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:47 AM
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdint.h>
#include "fifo.h"

void MyFIFOInit(uint32_t fifo_size,uint32_t fifo_id )
{
    FIFO* head = NULL;
    head = (FIFO *) malloc(sizeof(FIFO));
}

//Debbuging main
/*int main(void)
{
    
    return 0;
}*/


