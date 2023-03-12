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


struct FIFO* head = NULL;

void MyFIFOInit()
{
    head = (struct FIFO *) malloc(sizeof(FIFO));
    head->next = NULL;
}

void MyFIFORemove()
{
    struct FIFO* aux = head;
    head = head->next;
    free(aux);
}

void MyFIFOInsert(uint32_t data){
    struct FIFO *aux = head;
    struct FIFO *prev = NULL;
    if(head->next == NULL){
        head->data = data;
    }
    else{
    while(aux->next != NULL){
        prev = aux;
        aux = aux->next;
    }
    aux = (struct FIFO *) malloc(sizeof(FIFO));
    prev->next = aux;
    aux->data = data;
    aux->next = NULL;
    }
}

uint32_t MyFIFOPeep(void){
    return head->data;
}

uint32_t MyFIFOSize(void){
    uint32_t cnt = 0;
    struct FIFO *aux = head;
    if(head->next == NULL){
        return cnt;
    }
    else{
    while(aux->next != NULL){
        cnt++;
        aux = aux->next;
    }
    cnt++;      //Adds final element
    return cnt;
    }
}