	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 6 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 	
	#include <iostream>
	#include <stdlib.h>
	using namespace std;
	int main() {
	char oper;
	float num1, num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> oper;
	cout << "Enter any number: " ;
	cin >> num1 ;
	cout << "Enter any number: " ;
	cin >> num2;
	switch (oper) {
		case '+':
				cout << num1 << " + " << num2 << " = " << num1 + num2;
			return 0;
		case '-':
				cout << num1 << " - " << num2 << " = " << num1 - num2;
			return 0;
		case '*':
				cout << num1 << " * " << num2 << " = " << num1 * num2;
			return 0;
		case '/':
				cout << num1 << " / " << num2 << " = " << num1 / num2;
			return 0;
		default:
				cout << "Error! The operator is not correct";
			return 0;
}
	cout<<"\n\nYou have successfully calculated your results but the program has not been ended" ;
	cout << "code after switch loop will be executed now";
		return 0;
}
