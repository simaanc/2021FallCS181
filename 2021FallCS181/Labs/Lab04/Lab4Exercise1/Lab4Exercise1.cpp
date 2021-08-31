/*************************************************************************
Cuyamaca College CS-181

File name:	Lab4Exercise1.cpp

Description: Lab #4, Exercise #1, Find which number is bigger

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//define variables
	float number1;
	float number2;

	//input numbers
	cout << "Enter the 1st number: ";
	cin >> number1;
	cout << "Enter the 2nd number: ";
	cin >> number2;

	//check which is bigger and output
	if (number1 < number2) {
		cout << number1 << " is smaller than " << number2;
	}

	if (number1 > number2) {
		cout << number1 << " is bigger than " << number2;
	}

	if (number1 == number2) {
		cout << number1 << " is equal to " << number2;
	}

	return(0);
}