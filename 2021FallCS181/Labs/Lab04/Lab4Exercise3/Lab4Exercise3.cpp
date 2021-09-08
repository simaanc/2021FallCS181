/*************************************************************************
Cuyamaca College CS-181

File name:	Lab4Exercise3.cpp

Description: Lab #4, Exercise #3, Calculate software sales with discount

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	//define variables
	int quantity;
	float packagePrice = 99.00;
	float preDiscount;
	
	//get input
	cout << "How many units were sold? ";
	cin >> quantity;

	//calculate preDiscount
	preDiscount = quantity * packagePrice;

	//output total with discount
	if (quantity >= 0 && quantity <= 9) {
		cout << "The total cost of the purchase is $" << fixed << setprecision(2) << preDiscount;
	}
	else if (quantity >= 10 && quantity <= 19)  {
		cout << "The total cost of the purchase is $" << fixed << setprecision(2) << (preDiscount - (preDiscount * .2));
	}
	else if (quantity >= 20 && quantity <= 49) {
		cout << "The total cost of the purchase is $" << fixed << setprecision(2) << (preDiscount - (preDiscount * .3));
	}
	else if (quantity >= 50 && quantity <= 99) {
		cout << "The total cost of the purchase is $" << fixed << setprecision(2) << (preDiscount - (preDiscount * .4));
	}
	else if (quantity >= 100) {
		cout << "The total cost of the purchase is $" << fixed << setprecision(2) << (preDiscount - (preDiscount * .5));
	}
	else {
		cout << "Please enter a number greater than 0.";
	}
	
	return(0);
}