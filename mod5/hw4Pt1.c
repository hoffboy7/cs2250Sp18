/*
 * =====================================================================================
 *
 *       Filename:  hw4Pt1.c
 *
 *    Description:  Programming assignment 4 part 1
 *
 *        Version:  1.0
 *        Created:  02/10/2018 01:42:17 PM
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
char triangleChar = '-';
printf("Enter a character: \n");
scanf("%c", &triangleChar);


int i;
int j;
int rows;

printf("Enter triangle height: \n ");
scanf("%d", &rows);
for(i = 1; i <= rows; i++)
{
    for (j = 1; j<= i; j++)
        printf("%c", triangleChar);
    printf("\n");
}

    return 0;
}
// Function Definitions


