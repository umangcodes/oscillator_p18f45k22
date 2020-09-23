/*
Project: General purpose
Author: Umang A
Description: Check pseudo code.
Date:

*/
#include<p18f45k22.h>
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
