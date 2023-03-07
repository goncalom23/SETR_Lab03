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

void MyFIFOInit()
{
    FIFO* head = NULL;
    head = (FIFO *) malloc(sizeof(FIFO));
}

void MyFIFORemove()
{
    FIFO *aux;	
    aux = head->next;
    head = head->next;
}

//Debbuging main
/*int main(void)
{
    
    return 0;
}*/


