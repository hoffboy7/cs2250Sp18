/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guess Game
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Hoffman (), kevinhoffman@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
const int LEN = 5; // # of opportunities
const int NUM = 20; //number between 0-NUM
// Function Prototypes

// Main Function
int main()
{
    int input[LEN];
    int opp = 0;
    int guess = 0;

    //1) Create a random number between 0-20
    srand((int) time(0));
    guess = rand() % NUM;

    //2) Ask the user to enter a guess number 0-20. Capture input in an array
    while(opp < LEN)
    {
    printf("Enter a number between 0 and 20");
    scanf("%d", &input[opp]);
    //2.2) Validate input
    if(input[opp] > 20 || input [opp] < 0)
    {
        continue ; //repeat the question
    }

    

    //3) IF the number is less than the random number, print "go higher". ELSE print go lower.
    if(input[opp] < guess)
    { 
        printf("go higher\n");
    }

    else if (input[opp] == guess)
    {
        printf("You got it! %d\n", guess);
        break; // exit loop
    }


    else
    {
        printf("go lower\n");
    }
    opp++; //increase
    }



    //4) You have LEN chances to guess the correct number
    //5) Display all the choices you entered
    printf("You entered; ");
    for(int i = 0; i < opp; i++)
    {
        printf("%d", input[i]);
    }

    printf("\n Thank you for playing\n");

    return 0;
}
// Function Definitions


