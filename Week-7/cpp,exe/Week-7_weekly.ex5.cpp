	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Weekly Tasks
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int marks ;
	cout << "Enter the Marks: " ;
	cin >> marks ;
	
	while (!(marks > 0 && marks <= 50)){
		cout << "Invalid input! Marks must be in range of (0-50). TRY AGAIN: " << endl ;
		cin >> marks ;
	}
	if (marks > 0 && marks <= 50 ){
		cout << "You entered valid marks: " << marks << endl ;
	}
	system("pause");
	return 0 ;
	}

