/********************
Programming Fundamentals-Lab
Lab-10
Code written BY: Hassan Ali
Instructor: Nimra Mughal
***********************/
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char firstName[50];
    cout << "Enter the first name: ";
    cin >> firstName;

    char lastName[50];
    cout << "Enter the last name: ";
    cin >> lastName;

    strcat(firstName, lastName);
	string fullName = firstName ;
    char result[200];
    result[0] = '\0';
    for(int i=0 ; i<strlen(firstName) ; i++)
	firstName[i] = tolower(firstName[i]);
	
    for (int i = 0; i < strlen(firstName); i++) {

        if (strchr(result, firstName[i])== 0) { 
            strncat(result, &firstName[i],1);
        }
    }

    cout << "Concatenated string: " << fullName << endl;
    cout << "Combined string with duplicate characters removed: " << result << endl;

    return 0;
}

