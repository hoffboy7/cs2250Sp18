/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication tables 1-10
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:33 AM
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
const int high = 10;
// Function Prototypes

// Main Function
int main()
{
    int row = low;
    int col = low;
    

    while(row <= high)
    {
        while(col <= high) 
        {
        printf("%3d", row * col);
        col++;
        }
        
        printf("\n");
        //Update values
        col = low;
        row++; //or row = row + 1
    }




    return 0;
}
// Function Definitions


