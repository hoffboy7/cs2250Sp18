/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:   Test range of values (AND OR)
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:33:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h> // Boolean Variables 

// Constants

// Function Prototypes

// Main Function
int main()
{
    int grade;
    bool success = true;

    // 1) Ask user for int value
    printf("Enter your grade\n");
    scanf("%d", &grade);

    // 2) If 100 <= value <= 90, then print 'A'
    if(grade >= 90 && grade <= 100)
    {
        printf("You got an A\n");
    }

    // 3) If 90 < value <= 80, then print 'B'
    else if(grade > 80 && grade <= 90)
    {
        printf("You got a B\n");
    }

    // 4) If 80 < value <= 70, then print 'C'
    else if(grade > 70 && grade <= 80)
    {
        printf("You got a C\n");
    }

    // 5) If 70 < value, then print 'E'
    else
    {
        printf("Sorry amigo. You got a no grade.\n");
        success = false;
    }

    // Test for TRUE or FALSE
    if(success)
    {
        printf("Congrats!\n");
    }

    else
    {
        printf("See you next semester\n"); 
    }


    return 0;
}
// Function Definitions


