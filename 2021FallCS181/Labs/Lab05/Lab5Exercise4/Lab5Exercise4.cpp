/*************************************************************************
Cuyamaca College CS-181

File name:	Lab5Exercise4.cpp

Description: Lab #5, Exercise #4, Open file and count numbers, add all numbers, and calculate average

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <fstream> 

using namespace std;

int main() {
	//define variables
	ifstream fileInput;

	double sum = 0;
	double totalNumbers = 0;
	double average;
	double numbers;

	//open Random.txt
	fileInput.open("Random.txt");

	//add all the numbers and count all the numbers
	while (fileInput >> numbers) {
		sum += numbers;
		totalNumbers++;
	}

	//calculate average
	average = sum / totalNumbers;

	//output
	cout << "Number of numbers: " << totalNumbers << endl;
	cout << "Sum of the numbers: " << sum << endl;
	cout << "Average of the numbers: " << average << endl;



	return 0;
}