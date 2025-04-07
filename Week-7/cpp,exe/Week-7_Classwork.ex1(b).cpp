	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main() {
	int marks ;
	float height ;
	
	do {
	cout << "Enter Your Marks: " ;
	cin >> marks ;
	cout << "Enter Your Height: " ;
	cin >> height ;
	} while ( !(marks>=0 && marks<=100) ) ;
	cout << "Your entered marks are: " << marks << endl ;
	cout << "Your height is: " << height << endl ;
	
	system("pause");
	return 0 ;
	}

