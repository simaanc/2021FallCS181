#include <iostream>

using namespace std;

int main()
{
	double hours;
	double rate;
	double pay;

	// Input - Get the number of hours worked.
	cout << "How many hours did you work? ";
	cin >> hours;

	// Input - Get the hourly pay rate.
	cout << "How much do you get paid per hour? ";
	cin >> rate;

	// Calculate the pay.
	pay = hours * rate;

	// Output - Display the pay.
	cout << "You have earned $" << pay << endl;
	return 0;
}