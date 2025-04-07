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
	int start , end ;
	cout << "Enter the starting number: " ;
	cin >> start ;
	cout << "Enter the ending number: " ;
	cin >> end ;
	cout << "\n\n---------------------------------------\n" ;

	cout <<	"Whole Numbers: " << endl ;
	for ( int i=start ; i <=end ; i++){
		cout << i << " " ;
	}
	cout << "\n\n---------------------------------------\n" ;
	cout <<	"Natural Numbers: " << endl ;
	for ( int i=start ; i<=end ; i++){
		cout << i << " " ;
	}
	cout << "\n\n---------------------------------------\n" ;
	cout <<	"Even Numbers: " << endl ;
			for ( int i=start ; i<=end ; i+=2){
				if ( i%2==0 ){		
				cout << i << " " ;
		}		else {
			cout << ++i << " " ;
		}

	}
	cout << "\n\n---------------------------------------\n" ;
	cout <<	"Odd Numbers: " << endl ;
	for ( int i=start ; i<=end ; i+=2){
		if (i%2!=0)
			cout << i << " " ;
		else {
			cout << ++i << " " ;
		}
	}
	cout << "\n\n---------------------------------------\n" ;
	cout << endl << endl ;
	system("pause");
	return 0 ;
	}

