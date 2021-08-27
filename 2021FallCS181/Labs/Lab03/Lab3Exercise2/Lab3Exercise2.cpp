/*************************************************************************
Cuyamaca College CS-181

File name:	Lab3Exercise2.cpp

Description: Lab #3, Exercise #2, Count calories of cookies

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//define variables
	int cookiesEaten;
	int calories;

	//get input
	cout << "How many cookies did you eat? ";
	cin >> cookiesEaten;

	//calculate calories
	calories = cookiesEaten * 100;

	//output
	cout << "You consumed " << calories << " calories.";

	return(0);
}