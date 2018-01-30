/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  Test switch statements.
 *    Note: Only works on integers, single char
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:47 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *i
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    // 1) pos = 1 => gold medal
    // 2) pos = 2 => silver medal 
    // 3) pos = 3 => bronze medal
    // 4) pos > 3 => Sorry, no medal
    switch(pos)
    {
        case 1:       //if (pos == 1)
            printf("You are %d gold medal\n", pos);
            break; // leave the switch block

        case 2:       //if (pos == 2)
            printf("You are %d silver medal\n", pos);
            break;

        case 3:       //if (pos == 3)
            printf("You are %d bronze medal\n", pos);
            break;

        case 28:       //if (pos == 28)
        case 14:       //if (pos == 14)
            printf("You are %d plastic medal\n", pos);
            break;

        default:      // else statement
            printf("You are %d place. Sorry, no medal\n", pos);
    } // end of switch 

    return 0;
}
// Function Definitions


