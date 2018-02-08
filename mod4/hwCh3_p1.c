/*
 * =====================================================================================
 *
 *       Filename:  hwCh3_p1.c
 *
 *    Description:  i
 *
 *        Version:  1.0
 *        Created:  02/06/2018 05:19:52 PM
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
    char Service[50];
    int cost;

    printf("Enter desired auto services: \n");
    scanf("%s", Service);
    printf("You entered: %s", Services);

    if (strcmp (Service, "Oil change") == 0)
    {
        cost = 35;
        printf("Cost of %s change: %d\n", Service, cost);
    }
    else if (strcmp(Service, "Tire rotation") == 0)
    {
        cost = 19;
        printf("Cost of tire rotation is: $%d\n", cost);
    }
    else if (strcmp(Service, "Car wash") == 0)
    {
        cost = 7;
        printf("Cost of car wash: %d\n", cost);
    }
    else
    {
        printf("ERROR: Requested service is not familiar\n");
    }
    

    return 0;
}
// Function Definitions


