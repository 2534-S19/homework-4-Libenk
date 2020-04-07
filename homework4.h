/*
 * homework4.h
 *
 *  Created on:
 *      Author:
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_
#define none    0xFF

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar);

// TODO: Define any constants that are local to homework.c using #define
typedef enum   {s0,s1,s2,s3} buffer;
static buffer button=s0;

#endif
/* HOMEWORK4_H_ */

