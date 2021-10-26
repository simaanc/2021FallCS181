/*************************************************************************
Cuyamaca College CS-181

File name:	Lab9Exercise1.cpp

Description: Lab #9, Exercise #1, 

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MovieData {
	string title;
	string director;
	int year;
	int runningTime;
	double productionCost;
	double firstYRRevenue;

	MovieData(string T, string D, int Y, int RT, double PC, double R) {
		title = T;
		director = D;
		year = Y;
		runningTime = RT;
		productionCost = PC;
		firstYRRevenue = R;
	}
};

void outputInfo(MovieData);

int main() {

}

void outputInfo(MovieData d) {
	cout << "Title";
	cout << right << setw(20) << ": " << d.title;
	cout << "Director";
	cout << right << setw(17) << ": " << d.director;
	cout << "Released";
	cout << right << setw(17) << ": " << d.year;
	cout << "Running Time";
	cout << right << setw(13) << ": " << d.runningTime;
	cout << "Production Cost";
	cout << right << setw(10) << ": " << d.productionCost;
	cout << "Yr. Profit/Loss";
	cout << right << setw(9) << ": " << d.firstYRRevenue;
}