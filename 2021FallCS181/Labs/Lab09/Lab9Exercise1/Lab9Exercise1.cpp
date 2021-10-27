/*************************************************************************
Cuyamaca College CS-181

File name:	Lab9Exercise1.cpp

Description: Lab #9, Exercise #1, create moviedata structure and output data

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//create struct
struct MovieData {
	string title;
	string director;
	int year;
	int runningTime;
	double productionCost;
	double firstYRRevenue;

	//set default values just in case of missing data
	MovieData() {
		title = "";
		director = "";
		year = 0;
		runningTime = 0;
		productionCost = 0;
		firstYRRevenue = 0;
	}
};

//function defintion
void outputInfo(MovieData);

int main() {
	MovieData movie1;
	MovieData movie2;

	//input data for movie 1
	movie1.title = "Avengers: Endgame";
	movie1.director = "Anthony Russo & Joe Russo";
	movie1.year = 2019;
	movie1.runningTime = 182;
	movie1.productionCost = 356000000;
	movie1.firstYRRevenue = 2798000000;

	//input data for movie 2
	movie2.title = "Spirited Away";
	movie2.director = "Hayao Miyazaki";
	movie2.year = 2001;
	movie2.runningTime = 125;
	movie2.productionCost = 19000000;
	movie2.firstYRRevenue = 305000000;

	//use outputInfo function with movie1 and movie2
	outputInfo(movie1);
	outputInfo(movie2);
}

/**********************************************************************
Function name:	outputInfo

Purpose: 		Gets the MovieData input and then outputs formatted list

Inputs: 		MovieData struct

Returns: 		None

Revision history
Date		By						Description
------------------------------------------------------------------------
10/26/2021	Christopher Simaan		Created, No formatting
10/26/2021	Christopher Simaan		Formatted outputs to right alignment

************************************************************************/

void outputInfo(MovieData d) {
	cout << "\nTitle";
	cout << right << setw(20) << ": " << d.title << endl;
	cout << "Director";
	cout << right << setw(17) << ": " << d.director << endl;
	cout << "Released";
	cout << right << setw(17) << ": " << d.year << endl;
	cout << "Running Time";
	cout << right << setw(13) << ": " << d.runningTime << " minutes" << endl;
	cout << "Production Cost";
	cout << right << setw(10) << ": " << fixed << setprecision(0) << d.productionCost << endl;
	cout << "Yr. Profit/Loss";
	cout << right << setw(10) << ": " << fixed << setprecision(0) << d.firstYRRevenue << endl << endl;
}