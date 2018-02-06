/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:51:14 AM
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
const int low = 1;
const int max = 9;
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    int fact = 1;
    printf("Please enter a number from %d-%d\n", low, max);
    printf(" and I will give you the factorial\n");
    scanf("%d", &num);
    

    if(num >= low && num <=max)
    { 
        printf("Calculating Factorial\n");
        while(num > 0)
        {
            // Do your work
            printf("Num = %d\n", num);
            fact = fact * num;
            num = num - 1; 
            //num -- ;
            //num -= 1;
        }
    }
    else 
    {
        printf("You did not follow the intructions\n");
    }

    printf("Done. Your factorial is %d\n", fact);




    return 0;
}
// Function Definitions


