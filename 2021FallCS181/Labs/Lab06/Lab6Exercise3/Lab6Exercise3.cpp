/*************************************************************************
Cuyamaca College CS-181

File name:	Lab6Exercise2.cpp

Description: Lab #6, Exercise #2, Calculate the distance something falls

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

void coinFlip(int);

int main() {
    //define variable
    int coinflips;

    //get input
    cout << "How many coin flips? ";
    cin >> coinflips;
    
    //run function per input
    coinFlip(coinflips);

    return 0;
}

/**********************************************************************
Function name:	coinFlip

Purpose: 		Randomly choose a number between 1 and 2 
                and assign heads or tails

Inputs: 		Number of times to flip coin

Returns: 		Number of times ran and heads or tails


Revision history
Date		By               		Description
------------------------------------------------------------------------
09/12/2021	Christopher Simaan		Created
09/12/2021	Christopher Simaan		Realize I can't put the loop in the 
                                    main function so moved it to coinFlip

************************************************************************/
void coinFlip(int flips) {
    //define variables
    int i;
    int coin;

    //set seed to be time away from 0
    srand(time(0));

    //loop number of times per argument flips
    for (i = 1; i <= flips; i++) {
        //random number between 1 and 2
        coin = rand() % 2 + 1;
        cout << i << ":\t";
        //if 1 output heads, if 2 output tails
        if (coin == 1) {
            cout << "heads\n";
        } else if (coin == 2) {
            cout << "tails\n";
        }
    }

}