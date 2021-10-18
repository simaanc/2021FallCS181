/*************************************************************************
Cuyamaca College CS-181

File name:	Lab8Exercise1.cpp

Description: Lab #8, Exercise #1, get c-string and evaluate it based on menu option

Developer: Christopher Simaan


*************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

//define variables
const int NAME_LENGTH = 100;

//define functions
int countVowels(char*); 
int countConsonants(char*);

int main() {
	char List[NAME_LENGTH];
	char choice;

	//get input string
	cout << "Enter a string: ";
	cin.getline(List, NAME_LENGTH);

	do {
		//output choices
		cout << "A) Count the vowels in the string\n";
		cout << "B) Count the consonants in the string\n";
		cout << "C) Count both vowels and consonants\n";
		cout << "D) Enter another string\n";
		cout << "E) Exit the program\n\n";
		cout << "Enter A, B, C, D, or E.\n";
		//get input
		cin >> choice;
		//input valiadation
		choice = toupper(choice);

		//do what the user chooses
		if (choice == 'A') {
			cout << "\nThe string has " << countVowels(List) << " vowels.\n\n";
		}
		if (choice == 'B') {
			cout << "\nThe string has " << countConsonants(List) << " consonants.\n\n";
		}
		if (choice == 'C') {
			cout << "\nThe string has " << countVowels(List) << " vowel and " << countConsonants(List) << " consonants.\n\n";
		}
		if (choice == 'D') {
			cout << "\nEnter another string: ";
			cin.ignore();
			cin.getline(List, NAME_LENGTH);
		}
		//exit if the user chooses E
	} while (choice != 'E');
}

/**********************************************************************
Function name:	countVowels

Purpose: 		Gets c-string and counts the number of vowels

Inputs: 		c-string

Returns: 		integer count of how many vowels are in the input


Revision history
Date		By						Description
------------------------------------------------------------------------
10/17/2021	Christopher Simaan		Created

************************************************************************/

int countVowels(char* input) {
	int count = 0;
	//check if input has aeiou
	for (int i = 0; i < strlen(input); i++) {
		if (toupper(input[i]) == 'A' ||
			toupper(input[i]) == 'E' ||
			toupper(input[i]) == 'I' ||
			toupper(input[i]) == 'O' ||
			toupper(input[i]) == 'U'
			) {
			count++;
		}
	}
	return count;
}

/**********************************************************************
Function name:	countConsonants

Purpose: 		Gets c-string and counts the number of consonants

Inputs: 		c-string

Returns: 		integer count of how many consonants are in the input


Revision history
Date		By						Description
------------------------------------------------------------------------
10/17/2021	Christopher Simaan		Created

************************************************************************/

int countConsonants(char* input) {
	int count = 0;
	//cout number of alphanumeric characters
	for (int i = 0; i < strlen(input); i++) {
		if (isalpha(input[i])) {
			count++;
		}
	}
	//return count - the vowels
	return count - countVowels(input);
}