/*
 * Timer.h
 *
 *  Created on: Aug 25, 2023
 *      Author: ahmed ragab,ahmed abdulazeem
 */

#ifndef  MCAL_TIMER0_TIMER0_H_
#define  MCAL_TIMER0_TIMER0_H_

/**
 * Mode of the timer.
 */
typedef enum timMode
{
    oneshot, periodic, edgeTime, PWM
}timerMode;

/**
 * Which timer block to use.
 */
typedef enum timBlock
{
    Timer0, Timer1, Timer2, Timer3, Timer4, Timer5,
    wTimer0, wTimer1, wTimer2, wTimer3, wTimer4, wTimer5
}timerBlock;

/**
 * Count direction of the timer.
 */
typedef enum countDirec
{
    up, down
}countDirection;

/**
 * Which subtimer to use or both in concatenated mode.
 */
typedef enum timesuse
{
    timerA, timerB, concatenated
}timerstate;
typedef enum
{
    positive, nigative, none
}edge;

void timer_Init(timerBlock timer,timerMode mode ,countDirection direction,timerstate block,u32 loadregister,edge edge_state)

#endif /* 1_MCAL_TIMER0_TIMER0_H_ */
