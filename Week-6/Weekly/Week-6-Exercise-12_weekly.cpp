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
	float temp ;
	cout << "Enter the temperature in Celcius: " ;
	cin >> temp ;
	if ( temp <= 20) {
		cout << "It is cold today. " << endl ;
	}
	else if ( temp > 20 && temp < 30 ) {
		cout << "It is moderate today. " << endl ;
	}
	else {
		cout << "It is hot today. " << endl ;
	}
	system("pause");
	return 0 ;
	}

