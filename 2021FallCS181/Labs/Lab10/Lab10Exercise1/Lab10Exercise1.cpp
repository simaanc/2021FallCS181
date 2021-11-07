/*************************************************************************
Cuyamaca College CS-181

File name:	Lab10Exercise1.cpp

Description: Lab #10, Exercise #1, Get file input and output formatted text

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	char fileName[50];
	ifstream dataFile;
	string lineString;
	int line = 0;

	//get file name
	cout << "Enter the File Name: ";
	cin >> fileName;

	//open file
	dataFile.open(fileName);

	//read all the lines of the file
	while (getline(dataFile, lineString)) {
		//count lines
		line++;

		//output line # and corresponding text 
		cout << line << ": " << lineString << endl;

		//check the line is 24
		if (line == 24) {
			cin.ignore();
			cout << "Press ENTER to continue...";
			cin.get();
			//reset counter
			line = 0;

		}

	}
	//close
	dataFile.close();
}