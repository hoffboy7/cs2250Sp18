/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Promt for positive number, stay in loop until one is entered.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:07 AM
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
int num = 0;
while(num <= 0)
{
printf ("Enter a positive number >=0): \n");
scanf("%d", &num);
}

printf("Done!\n");
    return 0;
}
// Function Definitions


