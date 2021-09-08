/*************************************************************************
Cuyamaca College CS-181

File name:	Lab4Exercise4.cpp

Description: Lab #4, Exercise #4, Calculate shipping charges

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//define variables
	float weight;
	float distance;
	float cost;
	
	//get weight of package
	cout << "Weight of the package in kilograms (max 20 Kg): ";
	cin >> weight;

	//check if weight is valid
	if (weight <= 0 || weight > 20) {
		cout << "Enter a value more than 0 and less than 20!";
	}
	else {
		//get distance
		cout << "Distance the package is to be shipped (min 10 Mi, max 3000 Mi): ";
		cin >> distance;
		//check if distance is valid
		if (distance < 10 || distance > 3000) {
			cout << "Please enter a value of at least 10 and no more than 3000";
		}
		else {
			//if distance & weight is valid calculate cost
			if (weight <= 2) {
				cost = 1.10 + (int((distance - 1) / 500) * 1.10);
			}
			else if (weight > 2 && weight <= 6) {
				cost = 2.20 + (int((distance - 1) / 500) * 2.20);
			}
			else if (weight > 6 && weight <= 10) {
				cost = 3.70 + (int((distance - 1) / 500) * 3.70);
			}
			else if (weight > 10 && weight <= 20) {
				cost = 4.80 + (int((distance - 1) / 500) * 4.80);
			}
			//output cost
			cout << "The shipping charge is $" << fixed << setprecision(2) << cost;
		}
	}

	return(0);
}