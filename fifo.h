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

struct FIFO  
{
    uint32_t data;      
    uint32_t priority;
    struct FIFO *next;
}FIFO;

extern struct FIFO* head;
extern uint32_t FIFO_size;
/** \brief Initializes all the important elements
*
*/
void MyFIFOInit();
/** \brief Inserts data to create a new node
*
*/
void MyFIFOInsert(uint32_t data, uint32_t pri);
/** \brief Returns the oldest element of the Fifo (next to be removed)
*
* \param[in,out] data Data to be organized in the fifo
* \return data of the oldest element
*/
uint32_t MyFIFOPeep(void);
/** \brief Gives the number of elements in the Fifo
*
* \return Number of elements of fifo
*/
uint32_t MyFIFOSize(void);
/** \brief Removes the oldest element of the fifo, and does the dynamic resize
*
* \return 
*/
void MyFIFORemove(void);

#endif
