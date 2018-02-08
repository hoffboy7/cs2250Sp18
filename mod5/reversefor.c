/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  countdown from 4 loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char name[] = "Waldo Weber";

    printf("Hi %s you are %lu bytes long\n", name, sizeof(name));

    //Task 1- Print one char at a time
    for(int c = 0; c < sizeof(name); c++)
    {
        printf("%c\n", name[c]);
    }


    //Task 2- Print name in reverse order. TODO next week 
    
    
    for(int i = 10; i > 0; i--)// i-- = -1 -1 -1 -1
    {
        printf("i %d\n", i);
    }


    return 0;
}
// Function Definitions


