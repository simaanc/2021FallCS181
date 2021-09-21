/*************************************************************************
Cuyamaca College CS-181

File name:	Lab6Exercise1.cpp

Description: Lab #6, Exercise #1, find an item's wholesale cost and its markup percentage

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//function prototype
double calculateRetail(double, double);

int main() {
	//define variables
	double wholesaleCost;
	double markupPercent;
	double retailPrice;

	//input validation
	do {
		cout << "Enter the item's wholesale cost: ";
		cin >> wholesaleCost;
		//check if < 0
		if (wholesaleCost < 0) {
			cout << "Input must be at least 0!\n";
		}
		//check if valid
	} while (!(wholesaleCost >= 0));
	do {
		cout << "Enter the item's markup percentage: ";
		cin >> markupPercent;
		//check if < 0
		if (markupPercent < 0) {
			cout << "Input must be at least 0!\n";
		}
		//check if valid
	} while (!(markupPercent >= 0));

	//get retailPrice through function
	retailPrice = calculateRetail(wholesaleCost, markupPercent);

	//output
	cout << "The item's retail price is $" << setprecision(2) << fixed << retailPrice;
}

/**********************************************************************
Function name:	calculateRetail

Purpose: 		Calculates the retail value and outputs a double

Inputs: 		The cost of the item and the markup of the item

Returns: 		The total retail price

Revision history
Date		By			            Description
------------------------------------------------------------------------
09/19/2021	Christopher Simaan		Created

************************************************************************/

double calculateRetail(double cost, double markup){
	return (cost * (markup * .01) + cost);
}