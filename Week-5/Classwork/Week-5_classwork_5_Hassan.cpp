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
	int limit = 10 , count = 0 , x , y  ;
	cout << "For Equation A " << endl ;
	cout << "Is this expression true or false? " << (limit < 20) || ((limit/count) > 7) ;
	cout << "\n########################################################"	<< endl ;
	cout << "For Equation B " << endl ;
	cout << "Input the valur of x: " ;
	cin >> x ;
	cout << "Input the valur of y: " ;
	cin >> y ;
	cout << "\n########################################################"	<< endl ;
	cout << "Is this expression True of False? " << !( ((count < 10) || (x < y)) && (count >= 0) ) << endl ;
	system("pause") ;
	return 0 ;
	}
	

