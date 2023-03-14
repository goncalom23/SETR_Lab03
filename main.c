/**
 * \file:   main.c
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:45 AM
 * 
 * \brief Module to test fifo library. Shows some error detection that was implemented
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
	printf("%u\n", MyFIFOPeep());
    MyFIFORemove();
    //printf("Hello 1\n");
    MyFIFOInsert(1,1);
	MyFIFORemove();
    //printf("Hello 2\n");
    MyFIFOInsert(2, 1);
    //printf("Hello 3\n");
    MyFIFOInsert(3, 3);
    //printf("Hello 4\n");
    MyFIFOInsert(123123, 2);
    MyFIFORemove();
	MyFIFOInsert(5, 3);
    //printf("Hello 5\n");
    printf("Oldest Number is %u and number of elements in FIFO is %u\n", MyFIFOPeep(), MyFIFOSize());
    return 0;
}
