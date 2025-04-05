	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 6 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int num ;
	cout << "Enter any number: " ;
	cin >> num ;
	if ( num <0){
		cout << "The absolute value of " << num << " is " << ( num*-1 ) << endl ;	
	}
	else {
		cout << "The absolute value of " << num << " is " << num << endl ;	
	}
	system("pause");
	return 0 ;
	}

