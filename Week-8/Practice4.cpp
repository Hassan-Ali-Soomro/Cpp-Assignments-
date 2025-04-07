	/***********************
	Programming Fundamental-Lab
	Week-8
	Classwork
	Instructor Nimra Mughal
	Coded By: Hassam Ali Soomro
	*////////////////////////
	
	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main() {

	int height;
	cout << "Enter the height of Pyramid: ";
	cin >> height;

	while (height<3){
	cout << "please enter the positive Number, greater than or equal to 3: ";
	cin >> height;
	}
		for (int i = 1; i <= height; i++) {
		cout << setw(height-i) << "" ; 
		for (int j = 1; j <= i; j++) {
		cout << "* ";
	}
	cout << endl;
	}
	height -=1 ;
		for (int i = 1; i <= height; i++) {
		cout <<setw(i-1) << ""; 
		for (int j = height ; j >= i; j--) {
		cout << " *";
	}
	cout << endl;
	}

//	height -= 1 ;
//	for (int i = 1; i <= height; i++) {
//		cout << setw(i-1) <<""; 
//		for (int j = i; j <= height; j++) {
//				cout << " "<<"*";
//	}
//
//	cout << endl;
//	}
	cout <<endl;
	return 0; 
	}
