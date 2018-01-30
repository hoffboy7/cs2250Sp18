/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  
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

    if (pos == 1)
    {
        printf("You are %d gold medal\n", pos);
    }

    else if (pos == 2)
    {
        printf("You are %d silver medal\n", pos);
    }

    else if (pos == 3)
    {
        printf("You are %d bronze medal\n", pos);
    }

    else 
    {
        printf("You are %d place. Sorry, no medal\n", pos);
    }


    return 0;
}
// Function Definitions


