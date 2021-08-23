/*************************************************************************
Cuyamaca College CS-181

File name:	Lab2Exercise3.cpp

Description: Lab #2, Exercise #3, Calculate resturant bill

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	
	//variables & calculations
	double meal = 88.67;;
	double tax = (6.75 / 100) * meal;;
	double tip = .2 * (meal + tax);;
	double total = meal + tax + tip;;

	//output
	cout << "Meal: $" << meal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Tip: $" << tip << endl;
	cout << "Total: $" << total << endl;

	return 0;
}