/*************************************************************************
Cuyamaca College CS-181

File name:	Lab5Exercise1.cpp

Description: Lab #5, Exercise #1, Calculate how many calories burned

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
	//define variables
	float caoriesburned = 0;

	//loop until 30 min
	for (int i = 5; i <= 30; i += 5) {
		//calories burned per amount of time
		caoriesburned = (i * 3.6);

		//output
		cout << setprecision(1) << fixed << caoriesburned << " calories were burned after " << i << " minutes." << endl; 
	}

}