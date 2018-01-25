/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:08 AM
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
    // 1) Define two strings
    char fname[20];
    char lname[20];
    // 2) Get fname info
    printf("Enter your fname\n");
    scanf("%s", fname);
    // 3) Get lname info
    printf("Enter your lname\n");
    scanf("%s", lname);
    // 4) Display initials 
    printf("Hello %s %s\n", fname, lname);
    //To access individual member of an array, us index notation with []
    printf("Your initials are [%c%c]\n", fname[0], lname[0]);

    return 0;
}
// Function Definitions


