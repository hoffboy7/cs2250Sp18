/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:47 AM
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
    int age = 0;
    int temp;
    //Request user input
    printf("How old are you?: \n");
    scanf("%d", &age);

    printf("i is %d\n", age);
    //Do not add a ; at the end of the IF statements
    if(age >= 18) //IF true, go inside the block
    {
        printf("You can vote\n");
    }

    else //Do not use a (). Default case or FALSE case
    {
        temp = 18 - age;
        printf("You have %d years to vote\n", temp);
    }


    if(age >= 21) //IF true, go inside the block
    {
        printf("You can buy alcohol\n");
    }

    else
    {
        temp = 21 - age;
        printf("You have %d years to buy alcohol\n", temp);
    }


    // Special case aage = 35
    if(age == 35)
    {
        printf("You are at the special age %d\n", age);
    }


    if(age >= 65)
    {
        printf("You can retire\n");
    }

    else //Do not use a (). Default case or FALSE case
    {
        temp = 65 - age;
        printf("You have %d years to retire\n", temp);
    }
    printf("Adios amigo\n");

    return 0;
}
    //Function Definitions


