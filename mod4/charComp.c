/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> // for character operations 
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9");
    scanf("%c", &num);
    if(num == '0')
    {
        printf("You entered 0\n");
    }

    else
    {
        printf("You entered non- zero %c\n", num);
    }

    if(isalpha(num) != 0) 
    {
        printf("It is alpha\n");
    }

    else if (isdigit(num) != 0) 
    {
        printf("It is a digit\n");
    }

    else 
    {
        printf("You are not alpha\n");
    }


    return 0;
}
// Function Definitions


