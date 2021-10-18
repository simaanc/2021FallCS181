/*************************************************************************
Cuyamaca College CS-181

File name:	Lab7Exercise2.cpp

Description: Lab #7, Exercise #2, Makes a report that displays sales for each salsa type

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//define varibales
	const int JARS = 5;
	string salsas[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int jar_sales[JARS];
	int jars_sold;
	int total = 0;
	int highest;
	int lowest;

	//output heading
	cout << "Sales entries for the past month" << endl;

	//get jars sold
	for (int i = 0; i < JARS; i++) {
		do {
			cout << "Jars sold last month of " << salsas[i] << ": ";
			cin >> jars_sold;

			//input validation
			if (jars_sold < 0) {
				cout << "Please enter a value above 0!\n";
			}
		} while (jars_sold < 0);
		jar_sales[i] = jars_sold;
	}

	//output heading
	cout << "\n     Salsa Sales Report" << endl;
	cout << "\nName\t\t" << right << setw(13) << "Jars Sold" << endl;
	cout << "-----------------------------" << endl;

	//set base
	highest = lowest = jar_sales[0];

	//output name of salsa and jars sold
	for (int i = 0; i < JARS; i++) {
		cout << salsas[i] << "\t\t";
		cout << right << setw(13) << jar_sales[i] << endl;
		
		//calculate total
		total += jar_sales[i];

		//calculate highest and lowest subscript
		if (jar_sales[i] > highest) {
			highest = jar_sales[i];
		} else if (jar_sales[i] < lowest) {
			lowest = jar_sales[i];
		}
	}

	//output total sales
	cout << "\nTotal sales:\t" << right << setw(13) << total << endl;
	

	cout << "High Seller:\t"; 

	//convert highest subscript to highest salsa and output
	for (int i = 0; i < JARS; i++) {
		if (jar_sales[i] == highest)
			cout << right << setw(13) << salsas[i] << endl;
	}

	cout << "Low Seller:\t";

	//convert lowest subscript to lowest salsa and output
	for (int i = 0; i < JARS; i++) {
		if (jar_sales[i] == lowest)
			cout << right << setw(13) << salsas[i] << endl;
	}
}