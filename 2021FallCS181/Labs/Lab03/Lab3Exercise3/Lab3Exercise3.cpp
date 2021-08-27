/*************************************************************************
Cuyamaca College CS-181

File name:	Lab3Exercise3.cpp

Description: Lab #3, Exercise #3, Convert Celsius to Fahrenheit

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//define variables
	float fahrenheit;
	float celsius;

	//input
	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	//conversion
	fahrenheit = (((9.0 / 5.0) * celsius) + 32);

	//output
	cout << setprecision(1) << fixed << fahrenheit << " degrees Fahrenheit.";

	return(0);
}