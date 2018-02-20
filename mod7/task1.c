/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (double) from the user
 *                  Define the following funcitons
 *                  1) TheSum: Returns the sum of the two numbers
 *                  2) TheProd: Returns the product of the 2 numbers
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:31:53 AM
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

int TheSum(double n1, double n2);
double TheProd(double n1, double n2);



// Main Function

int main()
{
    double num1 = 3.5;

    double num2 = 4.8;

    printf("The sum of %lf and %lf = %d\n", num1, num2,TheSum(num1, num2));
    printf("The product of %lf and %lf = %lf\n", num1, num2, TheProd(num1, num2));



    return 0;
}

int TheSum(double n1, double n2);
{
    

    return (int) (n1 + n2);
}

double TheProd(double n1, double n2);
{
    return (n1 * n2);
}

// Function Definitions


