/*************************************************************************
Cuyamaca College CS-181

File name:	Lab6Exercise4.cpp

Description: Lab #6, Exercise #4, Calculate total charges in hospital

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

//function prototype
double totalCharges(double, double);
double totalCharges(double, double, double, double);

int main() {
	//define variables
	char patient_type;
	double days;
	double rate;
	double medication;
	double labfees;
	double total;
	//heading
	cout << "This program will compute patient hospital charges." << endl;
	cout << "What was the patient type?" << endl;
	//get in or out patient with input verification
	do {
		cout << "In-patient or Out-patient? (I or O) ";
		cin >> patient_type;
		if (!((patient_type == 'I' || patient_type == 'i') || (patient_type == 'O' || patient_type == 'o'))) {
			cout << "Input must be either I or O!\n";
		}
	} while (!((patient_type == 'I' || patient_type == 'i') || (patient_type == 'O' || patient_type == 'o')));

	//what to do if in patient
	if (patient_type == 'I' || patient_type == 'i') {
		//get number of days in hospital with verification
		do {
			cout << "Number of days in the hospital: ";
			cin >> days;
			if (days < 0) {
				cout << "Number of days must be at least 0!\n";
			}
		} while (days < 0);
		//get daily room rates with verification
		do {
			cout << "Daily room rate: $";
			cin >> rate;
			if (rate < 0) {
				cout << "Daily room rate must be at least 0!\n";
			}
		} while (rate < 0);
		//get medication charges with verification
		do {
			cout << "Medication charges: $";
			cin >> medication;
			if (medication < 0) {
				cout << "Medication charges must be at least 0!\n";
			}
		} while (medication < 0);
		//get lab fees and other service charges with verification
		do {
			cout << "Lab fees and other service charges: $";
			cin >> labfees;
			if (labfees < 0) {
				cout << "Lab fees and other service charges must be at least 0!\n";
			}
		} while (labfees < 0);
		//get total using function
		total = totalCharges(days, rate, medication, labfees);
		//output total
		cout << "\nThe total charges are $" << setprecision(2) << fixed <<  total;
	}
	//what to do if out patient
	if (patient_type == 'O' || patient_type == 'o') {
		//get medication charges with verification
		do {
			cout << "Medication charges: $";
			cin >> medication;
			if (medication < 0) {
				cout << "Medication charges must be at least 0!\n";
			}
		} while (medication < 0);
		//get lab fees and other service charges with verification
		do {
			cout << "Lab fees and other service charges: $";
			cin >> labfees;
			if (labfees < 0) {
				cout << "Lab fees and other service charges must be at least 0!\n";
			}
		} while (labfees < 0);
		//get total using function
		total = totalCharges(medication, labfees);
		//output total
		cout << "\nThe total charges are $" << setprecision(2) << fixed << total;
	}
}

/**********************************************************************
Function name:	totalCharges

Purpose: 		Adds medication charges and lab fees + other service charges

Inputs: 		medication and lab fees and other service charges

Returns: 		the total

Revision history
Date		By						Description
------------------------------------------------------------------------
09/21/2021	Christopher Simaan		Created

************************************************************************/
double totalCharges(double medication, double labfees) {
	return medication + labfees;
}
/**********************************************************************
Function name:	totalCharges

Purpose: 		Calculates number of days stayed with the rate and 
				then adds on medication charges and lab fees and other 
				service charges

Inputs: 		days and rate medication and lab fees and 
				other service charges

Returns: 		the total

Revision history
Date		By						Description
------------------------------------------------------------------------
09/21/2021	Christopher Simaan		Created

************************************************************************/
double totalCharges(double days, double rate, double medication, double labfees) {
	return (days * rate) + medication + labfees;
}