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
	const int jars = 5;
	string salsa[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int jar_sales[jars];
	int jars_sold;
	int total = 0;
	int high;
	int low;
	string high_name;
	string low_name;

	//output heading
	cout << "Sales entries for the past month" << endl;

	//get jars sold
	for (int i = 0; i < jars; i++) {
		do {
			cout << "Jars sold last month of " << salsa[i] << ": ";
			cin >> jars_sold;

			//input validation
			if (jars_sold < 0) {
				cout << "Please enter a value above 0!\n";
			}
		} while (jars_sold < 0);
		jar_sales[i] = jars_sold;
	}
	
	//set base
	high = low = jar_sales[0];

	//output heading
	cout << "\n     Salsa Sales Report" << endl;
	cout << "\nName\t\t" << right << setw(13) << "Jars Sold" << endl;
	cout << "-----------------------------" << endl;
	//output name of salsa and jars sold
	for (int i = 0; i < jars; i++) {
		cout << salsa[i] << "\t\t";
		cout << right << setw(13) << jar_sales[i] << endl;
		
		//calculate total
		total += jar_sales[i];

	}

	//calculate highest
	for (int i = 0; i < jars; i++) {
		if (jar_sales[i] > high) {
			low = jar_sales[i];
			high_name = salsa[i];
		}
	}

	//calculate lowest
	for (int i = 0; i < jars; i++) {
		if (jar_sales[i] < low) {
			low = jar_sales[i];
			low_name = salsa[i];
		}

	}

	//output total sales, highest seller, and lowest seller
	cout << "\nTotal Sales:\t" << right << setw(13) << total << endl;
	cout << "High Seller:\t" << right << setw(13) << high_name << endl;
	cout << "Low Seller:\t" << right << setw(13) << low_name << endl;

}