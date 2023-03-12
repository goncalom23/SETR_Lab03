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


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include "fifo.h"

int main(void)
{
    MyFIFOInit();
    printf("Hello 1\n");
    MyFIFOInsert(1);
    printf("Hello 2\n");
    MyFIFOInsert(2);
    printf("Hello 3\n");
    MyFIFOInsert(3);
    printf("Hello 4\n");
    MyFIFOInsert(30123);
    printf("Hello 5\n");
    printf("Last Number is: %u\n", MyFIFOPeep());
    return 0;
}


