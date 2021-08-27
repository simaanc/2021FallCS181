/*************************************************************************
Cuyamaca College CS-181

File name:	Lab3Exercise4.cpp

Description: Lab #3, Exercise #4, Convert currencies

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//define variables
	float usd;
	float yen;
	float euro;

	//get input
	cout << "Enter a dollar amount: ";
	cin >> usd;

	//conversion
	yen = (usd * 109.83);
	euro = (usd * 0.85);

	//output
	cout << "Conversion Results" << endl;
	cout << "------------------" << endl;
	cout << setprecision(2) << fixed << yen << " Yen" << endl;
	cout << setprecision(2) << fixed << euro << " Euros" << endl;

	return(0);
}