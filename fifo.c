/**
 * \file:   fifo.c
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:47 AM
 * \brief Fifo functions implementation
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

/** 
* \brief This is where the head of the linked list is created, and some memory is alocated.
* This function assumes that the FIFO will have at least one element.
*/
void MyFIFOInit()
{
    head = (struct FIFO *) malloc(sizeof(FIFO));
    head->next = NULL;
    FIFO_size = 0;
}

/** 
 * \brief Checks if the number of elements is zero, and thows an error if true.
 * It recognizes the case where the size is 1, and the next of the head is undefined (memory that should not be acessed)
 * 
 * Since the oldest is always in the first position, it only changes the head pointer, and liberates the first element memory
*/
void MyFIFORemove()
{
    if(FIFO_size <= 0)
    {
        printf(RED "FIFO is already empty, ignoring...\n" RESET);
        return;
    }
    if(FIFO_size == 1){
        free(head);
        head = (struct FIFO *) malloc(sizeof(FIFO));
        head->next = NULL;
        FIFO_size--;
        return;
    }
    struct FIFO* aux = head;
    head = head->next;
    free(aux);
    FIFO_size--;
}

/** 
 * \brief Inserts the given data in the linked list.
 * 
 * Always inserts in the end, and it can detect when the list is empty or with one element.
 * Allocates only the necessary memory each time.
*/
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

/** 
 * \brief Gives the data that is in the head of the FIFO, since it is always the oldest.
 * 
 * Throws and error when you try to peep an empty FIFO. 
*/
uint32_t MyFIFOPeep(void){
    if(FIFO_size == 0){
        printf(RED "Fifo is empty, returning zero: " RESET);
        return 0;
    }
    else{
    return head->data;
    }
}

/** 
* \brief Return the variable FIFOSize, since the number of current elements is allways tracked.
*/
uint32_t MyFIFOSize(void){
    return FIFO_size;
}