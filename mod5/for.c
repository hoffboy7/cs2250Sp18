/*
 * =====================================================================================
 *
 *       Filename:  for.c
 *
 *    Description:  practice for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:06 AM
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
    //For loop
    //1) Initialize your condition 
    //2) Do your work
    //3) Update condition 
    //IF still true, continue work
    //ELSE finish loop

    int rounds = 3;
    while(rounds != 0)
    {
        printf("Hello there while\n");
        rounds -=1; //also, rounds = rounds - 1
    }

    //For loop version
    rounds = 4;
    for(int r = 0; r < rounds; r++) //r = 0 is only tested once. r++ is tested repeatedly 
    {
        printf("Hello there for\n");
    }

    printf("rounds %d\n", rounds);
    printf("rounds %d\n", rounds++);
    printf("rounds %d\n", rounds);
    printf("rounds %d\n", ++rounds);



    return 0;
}
// Function Definitions


