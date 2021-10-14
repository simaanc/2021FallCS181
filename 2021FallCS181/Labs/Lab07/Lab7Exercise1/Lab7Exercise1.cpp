/*************************************************************************
Cuyamaca College CS-181

File name:	Lab7Exercise1.cpp

Description: Lab #7, Exercise #1, Get array values and outputs biggest and smallest

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//define variables
	int numbers[10];
	int i;

	//heading
	cout << "This program will ask you to enter ten values, then it will\n";
	cout << "determine the largest and smallest of the values you entered\n" << endl;

	//get values and put into the array
	for (int &val : numbers) {
		cout << "Enter an integer value: ";
		cin >> val;
	}

	//define variables
	int highest = numbers[0];
	int lowest = numbers[0];

	//get highest
	for (i = 1; i < 10; i++) {
		if (numbers[i] > highest) {
			highest = numbers[i];
		}
	}
	//get lowest
	for (i = 1; i < 10; i++) {
		if (numbers[i] < lowest) {
			lowest = numbers[i];
		}
	}

	//output highest and lowest
	cout << "\nThe largest value entered is " << highest << endl;
	cout << "The smallest value entered is " << lowest << endl;

	//output all values
	cout << "\nHere are all the numbers entered: ";
	for (int val : numbers) {
		cout << val << " ";
	}
}