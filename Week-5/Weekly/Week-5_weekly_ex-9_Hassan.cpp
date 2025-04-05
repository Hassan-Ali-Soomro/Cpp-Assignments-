	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 5 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{

	int year ;
	string leap ;
	
	cout << "Enter the year: " ;
	cin >> year ;
	
	leap = (year % 4==0)? "It is a Leap year" : "It is not a Leap year" ;
	cout << leap << endl ;
	
	system("pause") ;
	return 0 ;
	}
	

