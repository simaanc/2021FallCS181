/*************************************************************************
Cuyamaca College CS-181

File name:	Lab5Exercise3.cpp

Description: Lab #5, Exercise #3, Find the greatest and least value in a series of ints

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//define variables
	int number;
	int minimum;
	int maximum;

	//print instructions
	cout << "Enter a series of integers and\n";
	cout << "I will then tell you the greatest and \n";
	cout << "the least members you entered.\n";
	cout << "Enter a number < 0 to end.\n";
	cout << "\n";

	//get input
	cout << "Enter an integer (negative number to quit): ";
	cin >> number;

	//set baseline as first input
	minimum = maximum = number;

	//loop when not a negative
	while (number > 0) {
		//check if lowest number
		if (number < minimum) {
			minimum = number;
		}
		//check if highest number
		else if (number > maximum) {
			maximum = number;
		}

		//output again in case of more numbers
		cout << "Enter an integer (negative number to quit): ";
		cin >> number;
	}

	//output after entering a negative
	cout << "\nThe greatest number you entered is " << maximum << "." << endl;
	cout << "The least number you entered is " << minimum << "." << endl;

	return 0;
}