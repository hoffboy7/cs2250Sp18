/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  Infinite while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:24:25 AM
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
    int num = 2;
    int age = 21;
    while(num)
    {
        printf("Num %d\n", num);
        num -- ;
    }
    // This loop requires a break statement
    while(1)
    {
        if(age == 0)
        {
            printf("Thank you\n");
            // breaks works on loops, switch blocks
            break; // break out of loop
        }
        printf("Your age is %d\n", age);
        age -- ;
    }



    return 0;
}
// Function Definitions


