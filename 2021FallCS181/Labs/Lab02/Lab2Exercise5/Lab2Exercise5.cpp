/*************************************************************************
Cuyamaca College CS-181

File name:	Lab2Exercise5.cpp

Description: Lab #2, Exercise #5, Convert Square Ft to Acres

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>

using namespace std;

int main() {
	//Variables & Calculations
	double acre = 43560;
	double landAmount = 391876;
	double calculation = landAmount / acre;

	//Output
	cout << "Total acres: " << calculation;

	return 0;

}