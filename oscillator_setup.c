/*
Project: X1-Li Management System    ||  mvp(stage-1)
Author: Umang A
Description: Check pseudo code.
*/

#include<stdio.h>
//#include<pic18f45k22.h>

#define True 1
#define False 0

//global variables

//function prototypes
void initialize_oscillator();
void initialize_ports();
void initialize_timer();
void initiate_communication();
void parse_sentence();
//main function

void initialize_oscillator(int frequency)
{
    switch(frequency)
    {
    case 1600:// Done
        OSCCON |= 0b01110010; // device running on internal RC at 16MHz
        OSSCON2 |= 0b00000000;
        OSCTUNE |= 0b00000000;
        break;
    case 800:// Done
        OSCCON |= 0b01100010; // device running on internal RC at 16MHz
        OSSCON2 |= 0b00000000;
        OSCTUNE |= 0b00000000;
        break;
    case 400:// Done
        OSCCON |= 0b01010010; // device running on internal RC at 16MHz
        OSSCON2 |= 0b00000000;
        OSCTUNE |= 0b00000000;
        break;
    case default:// Done
        OSCCON |= 0b00110010; // de vice running on internal RC at 16MHz
        OSSCON2 |= 0b00000000; // 0b xxxx xyxx ::TODO = if the module do not work properly flip the switch y which will turn the primary oscillator source on.
        OSCTUNE |= 0b00000000;
        break;
    }
}
void main()
{
    // initialize system
    // initialize system oscillator
    initialize_oscillator(800);        // provide the frequency
    initialize_ports();
    initialize_timer();
    initiate_communication();

    while(1)
    {
        // check for the incoming data
        // if msg received parse the message
        parse_sentence();

    }
}
