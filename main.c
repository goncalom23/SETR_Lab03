/**
 * \file:   main.c
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:45 AM
 * 
 * \brief Module to implement a FIFO. 
 * 
 * 
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdint.h>
#include "fifo.h"

int main(void)
{
    uint32_t fifo_size = 10;
    MyFIFOInit(fifo_size);
    return 0;
}


