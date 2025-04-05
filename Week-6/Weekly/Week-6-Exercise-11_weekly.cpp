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
	int speed , speedlimit , distance ;
	cout << "Enter the speed of vehicle(Kmh): " ;
	cin >> speed ;
	cout << "Enter the speed limit (Kmh): " ;
	cin >> speedlimit ;
	if ( speed > speedlimit ){
		cout << "You are out of speed limit." << endl ;
		cout << "Enter the distance covered after crossing the speed limit (in miles): " ;
		cin >> distance ;
		cout << "You are fined $" << ( distance * 10 ) / 5 << endl ;
	}
	else{
		cout << "You are within the speed limit. No fine is imposed." << endl ;
	}
	system("pause");
	return 0 ;
	}

