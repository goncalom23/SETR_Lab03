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

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */


struct FIFO* head = NULL;
uint32_t FIFO_size;

void MyFIFOInit()
{
    head = (struct FIFO *) malloc(sizeof(FIFO));
    head->next = 0;
    FIFO_size = 0;
}

void MyFIFORemove()
{
    if(FIFO_size <= 0)
    {
        printf(RED "FIFO is already empty, ignored\n" RESET);
        return;
    }
    struct FIFO* aux = head;
    head = head->next;
    free(aux);
    FIFO_size--;
}

void MyFIFOInsert(uint32_t data)
{
    struct FIFO *current = head;
    struct FIFO *new = NULL;
    //printf("%u\n", FIFO_size);

    if(head->next == NULL && FIFO_size == 0)
    {
        //printf("debug1\n");
        head->data = data;
        head->next = NULL;
        FIFO_size++;
    }

    else if(head->next == NULL && FIFO_size == 1)
    {
        //printf("debug2\n");
        new = (struct FIFO *) malloc(sizeof(FIFO));
        new->data = data;
        head->next = new;
        new->next = NULL;
        FIFO_size++;
    }

    else if(FIFO_size >= 2)
    {
        //printf("debug3\n");
        while (current->next != NULL)
        {
            current = current->next;
        }
        new = (struct FIFO *) malloc(sizeof(FIFO));
        new->data = data;
        new->next = NULL;
        current->next = new;
        FIFO_size++;
    }
}

uint32_t MyFIFOPeep(void){
    return head->data;
}

uint32_t MyFIFOSize(void){
    return FIFO_size;
}