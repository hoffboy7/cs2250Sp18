/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  Learn how to use random numbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand () function
#include <time.h> // for srand() function: set your seed
// Constants

// Function Prototypes

// Main Function
int main()
{
    //Set your random seed
    srand((int)time(0));
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    

    return 0;
}
// Function Definitions


