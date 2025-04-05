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
	int limit = 10 , count = 0 , x = 4 , y = 3;
	
	cout << "b. " << ( count == 0 && limit < 20 ) ;		
	cout << "\nc. " << (limit > 20) || (count < 5) ;		
	cout << "\nd. " << (count < 10) || (x < y) ;
	cout << "\nf. " << (count == 1) && (x < y) ;
	cout << "\ng. " << !(count == 12) ;
	cout << "\nh. " << ((limit/count) > 7) && (limit < 0) ;// it produces an error because in involves a zero in the division.
	cout << "\na. " << (limit < 0) && ((limit/count) > 7) ;// it produces an error because in involves a zero in the division.
	cout << "\ne. " << ((limit/count) > 7) || (limit < 20) ;// it produces an error	because in involves a zero in the division.
	
	system("pause") ;
	return 0 ;
	}
	

