/*************************************************************************
Cuyamaca College CS-181

File name:	Lab4Exercise2.cpp

Description: Lab #4, Exercise #2, Calculate BMI

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	//define variables
	float weight;
	float height;
	float BMI;

	//get input
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in inches: ";
	cin >> height;

	//calcluate & output BMI
	BMI = weight * (703 / pow(height, 2));
	cout << "Your BMI is " << fixed << setprecision(2) << BMI <<endl;

	//calculate and output ranges
	if (BMI < 18.5) {
		cout << "You are underweight";
	}
	if (BMI >= 18.5 && BMI <= 24.9) {
		cout << "Your weight is normal";
	}	
	if (BMI >= 25 && BMI <= 29.9) {
		cout << "You are overweight";
	}
	if (BMI > 30) {
		cout << "You are obese";
	}

	return(0);
}