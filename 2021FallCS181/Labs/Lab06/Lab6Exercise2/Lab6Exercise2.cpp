/*************************************************************************
Cuyamaca College CS-181

File name:	Lab6Exercise2.cpp

Description: Lab #6, Exercise #2, Calculate the distance something falls

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double fallingDistance(double);

int main() {
	//define vaeiables
	double distance;
	double time;

	//output heading
	cout << "Seconds\t\tDistance" << endl;
	cout << "=============================" << endl;

	//cycle 1-10
	for (int i = 0; i < 10; i++) {
		time = i + 1;
		//output time
		cout << setprecision(0) << fixed << setw(2) << right << time << "";
		//output distance
		distance = fallingDistance(time);
		cout << setprecision(2) << fixed << setw(20) << right << distance <<  " meters\n";
	}

	return 0;
}


/**********************************************************************
Function name:	fallingDistance

Purpose: 		Calculates the distance given time using 
				the formula d=1/2gt^2 

Inputs: 		Time an object has been falling

Returns: 		Distance an object fell

Revision history
Date		By		            	Description
------------------------------------------------------------------------
09/20/2021	Christopher Simaan		Created

************************************************************************/
double fallingDistance(double fallingTime) {
	return ((.5) * (9.8)) * pow(fallingTime, 2);
}