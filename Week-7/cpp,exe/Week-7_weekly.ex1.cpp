	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Weekly Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	#include <ctime>
	#include <cstdlib>
	using namespace std ;
	int main()
	{
	int num ;
	cout << "Welcome To Guess The Number Game" << endl;
	cout << "Guess The Number (0-100): " ;
	cin >> num ;
	cout << "-------------------------------------------\n" ;
	
	srand(time(0)) ;
	int randomNum = rand()%101 ;

	if ( num ==randomNum ) {
		cout << "Congratulations, You guessed exactly the right number." << endl ;
	}
	while (!( num==randomNum ) ){
		if ( num<randomNum ){
			cout << "The number is too low, Enter the larger number: " << endl;
			cin >> num ;
		}
		if ( num>randomNum ){
			cout << "The number is too high, Enter the smaller number: " << endl ;
			cin >> num ;
		}
		if ( num==randomNum ){
			cout << "congratulations you guessed the right answer finally." << endl ;
		}		
	}
	system("pause");
	return 0 ;
	}

