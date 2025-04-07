/********************
Programming Fundamentals-Lab
Lab-10
Code written BY: Hassan Ali
Instructor: Nimra Mughal
***********************/
#include <iostream>
#include <string>
using namespace std ;

int main(){
	string text ;
	cout << "Enter a large text: " ;
	getline (cin , text) ;

	string substring = text.substr() ;
	cout << "Enter the substring you want to search for: " ;
	cin >> substring ;

	int found = text.find(substring) ;
    if (found != string::npos) {
        cout << "Found word at position " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }

	system ("Pause");
	return 0 ;
}

