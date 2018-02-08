/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  :multiplication tables 1-10
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:11 AM
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
const int ROW = 10;
const int COL = 10;

// Function Prototypes

// Main Function
int main()
{
   for(int r = 1; r <= ROW; r++)
   {
       for(int c = 1; c <= COL; c++)
               {
               printf("%4d", r * c);
               } // end of col
               printf("\n");
               
                
    } //end of row
               
                


    return 0;
}
// Function Definitions


