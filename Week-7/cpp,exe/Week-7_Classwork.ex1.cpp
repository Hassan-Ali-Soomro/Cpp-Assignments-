	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std;
	int main() {
	
	int marks;
	float height ;

	cout << "Enter the Marks: ";
	cin >> marks;
	cout << "Enter the Height : " ;
	cin >> height ;

	while ( !(marks>=0 && marks<=100) ) {
	cout << "Please enter the valid value of Marks" << endl;
	cin >> marks;
	}	
	cout << "Your marks are: " << marks << endl ;
	cout << "Your height is: " << height << endl ;
	system("pause");
	return 0 ;
}
