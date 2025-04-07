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
	int W , N , O , E ;
	cout <<	"First 10 Whole Numbers in reverse order: " << endl ;
	for ( W=9 ; W >= 0 ; W--){
		cout << W << " " ;
	}
	cout << "\n\n---------------------------------------\n" ;
	cout << endl <<	"First 10 Natural Numbers in reverse order: " << endl ;
	for ( N=10 ; N >= 1 ; N--){
		cout << N << " " ;
	}
	cout << "\n\n---------------------------------------\n" ;
	cout <<	endl << "First 10 Odd Numbers in reverse order: " << endl ;
	for ( O=19 ; O >= 1 ; O-=2){
		cout << O << " " ;
	}
	cout << "\n\n---------------------------------------\n" ;
	cout <<	endl << "First 10 Even Numbers in reverse order: " << endl ;
	for ( E=20 ; E >= 2 ; E-=2){
		cout << E << " " ;
	}

	cout << endl << endl ;
	system("pause");
	return 0 ;
	}

