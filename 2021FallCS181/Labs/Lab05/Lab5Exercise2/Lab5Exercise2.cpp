/*************************************************************************
Cuyamaca College CS-181

File name:	Lab5Exercise2.cpp

Description: Lab #5, Exercise #2, calculates how much a person makes if pay doubles

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

	//define variables
	int days;
	float dailyPay = .01;
	float totalPay = 0;

	//get number of days
	cout << "For how many days will the pay double? ";
	cin >> days;
	cout << "\n";

	//Input Validation
	while (days < 1) {
		cout << "You have to enter at least 1 day!\n" << endl;

		cout << "For how many days will the pay double? ";
		cin >> days;
		cout << "\n";
	}

	//Output Heading
	cout << "Day\t\tTotal Pay" << endl;
	cout << "---------------------------------" << endl;

	//Increment per number of days
	for (int i = 0; i < days; i++) {
		totalPay += dailyPay;
		cout << (i + 1)  << "\t\t$	";
		cout << dailyPay << endl;
		dailyPay *= 2;
	}

	//Output Total Pay
	cout << "---------------------------------" << endl;
	cout << "Total\t\t$	" << totalPay;

	return 0;
}