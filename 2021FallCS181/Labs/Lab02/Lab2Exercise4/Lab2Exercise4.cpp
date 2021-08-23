/*************************************************************************
Cuyamaca College CS-181

File name:	Lab2Exercise4.cpp

Description: Lab #2, Exercise #4, Calculate Annual Pay

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//Define Variables & Calculations
	double payAmount = 2200.0;
	double payPeriods = 26;
	double annualPay = payAmount * payPeriods;

	//Output
	cout << "Annual salary is: $" << annualPay;

	return 0;
}