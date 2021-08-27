/*************************************************************************
Cuyamaca College CS-181

File name:	Lab3Exercise1.cpp

Description: Lab #3, Exercise #1, Counts the number of tickets sold per seat cost

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//define variables
	int classA;
	int classB;
	int classC;
	float totalIncome;

	//get inputs
	cout << "Enter the number of Class A tickets sold: ";
	cin >> classA;	
	cout << "Enter the number of Class B tickets sold: ";
	cin >> classB;	
	cout << "Enter the number of Class C tickets sold: ";
	cin >> classC;

	//calculate profit
	totalIncome = (classA * 15) + (classB * 12) + (classC * 9);

	//output profit
	cout << "Toal income from sale of tickets is $" << setprecision(2) << fixed << totalIncome;

	return(0);
}