/**
 * \file:   fifo.h
 * \author: Gonçalo Martins <goncalom23@ua.pt> and Filipe Silva <filipe.msilva@ua.pt>
 *
 * \date March 07, 2023, 09:47 AM
 * \brief Fifo data structure, and function signatures
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
#include<time.h>

#ifndef fifo_H
#define fifo_H

/** 
* 
* \brief Structure FIFO - linked List
*
* Elements:
* - Interger data (stores the data)
* - Pointer to the next Node
*/
struct FIFO  
{
    uint32_t data;      
    struct FIFO *next;
}FIFO;

extern struct FIFO* head;
extern uint32_t FIFO_size;

/** 
*   \brief Initializes all the important elements
*/
void MyFIFOInit();

/** 
* \brief Inserts data to create a new node
* \param Arg1: Data to be inputed.
*/
void MyFIFOInsert(uint32_t data);

/** 
* \brief Returns the oldest element of the FIFO (next to be removed)
* \return data of the oldest element
*/
uint32_t MyFIFOPeep(void);

/** 
* \brief Gives the number of elements in the FIFO
* \return Number of elements of FIFO
*/
uint32_t MyFIFOSize(void);

/**
* \brief Removes the oldest element of the FIFO, and does the dynamic resize
* \return 
*/
void MyFIFORemove(void);

#endif
