	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 6 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std;
	int main() {
	char oper;
	float num1, num2;
	cout << "Menu-Driven Calculator " << endl ;
	cout << "----------------------------------" << endl ;
	cout << "Choose an operation: " << endl ;
	cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4.Division " << endl ;
	cout << "Enter the Number corresponding to your choice (1-4): " ;
	cin >> oper;
	cout << "Enter the first number: " ;
	cin >> num1 ;
	cout << "Enter the second number: " ;
	cin >> num2 ;
	switch (oper) {
		case '1':
			cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 ;
			break ;
		case '2':
			cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 ;
			break ;
		case '3':
			cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2;
			break ;
		case '4' :
			cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2;
			break ;
		default:
	
			cout << "Error! The operator is not correct";
			break ;
	}
	return 0;
	}
