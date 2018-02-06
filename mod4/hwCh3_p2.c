/*
 * =====================================================================================
 *
 *       Filename:  hwCh3_p2.c
 *
 *    Description:  PA3 part 2
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:03:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> 
// Constants

// Function Prototypes

// Main Function
int main()
{
    char oil [11];
    int oilValue = 35;
    char tire[] = "Tire rotation";
    int tireValue = 19; 
    char wash[] = "Car Wash";
    int washValue = 7;
    char wax[] = "Car Wax";
    int waxValue = 12;
    printf("Davy's auto shop services\n Oil change -- $35\n Tire rotation -- $19\n Car wash -- $7\n Car wax -- $12\n");
    strcpy(oil, "Oil Change");
    printf("%s $%d\n", oil, oilValue);
    printf("%s $%d\n", tire, tireValue);
    printf("%s $%d\n", wash, washValue);
    printf("%s $%d\n", wax, waxValue);

    return 0;
}
// Function Definitions


