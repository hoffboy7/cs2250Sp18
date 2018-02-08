/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print first 20 numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:09:38 AM
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
    int counter = 0;
    while(1)
    {
        if((num % 2) == 0)
        {
            printf("Even number %d\n", num);
        }

        else
        {
            printf("\tSkip odd number %d\n", num);
            num++; //increment/update condition 
            continue; // go to the top of loop
        }

        //print even numbers
        //skip odd numbers
        //when 20 even numbers, break loop
        num++;
        counter++;
        if(counter == 20)
        {
            break; //leave loop
        }

    }


    return 0;
}
// Function Definitions


