/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  Learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:30 AM
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
const int LEN = 60;


// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33; //first member
    ar[1] = 22; // second member
    ar[2] = 66; //third member
    ar[3] = 99; // fourth member
    
    //printf information 
    printf("First value %d\n", ar[0]);
    printf("Fourth value %d\n", ar[3]);

    //Initialize the full array
    for(int i = 0; i < LEN; i++)
    {
        // Task initialize number divisible by 3
        // to 0, else set it to -99
        if((i % 3)== 0)
        {
            ar[i] = 0;
        }
        else
        {   
        ar[i] = -99; //initialize to 99
        }


    }

    // Iterate over the full array
    for (int i = 0; i < LEN; i++)
    {
        printf("The %d value is %d\n", i + 1, ar[i]);
    }




    return 0;
}
// Function Definitions


