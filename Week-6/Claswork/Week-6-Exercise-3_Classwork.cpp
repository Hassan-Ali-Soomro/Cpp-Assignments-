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
	string player1 , player2 ;
	int score1 , score2 ;
	
	cout << "Enter Player 1's Name: " ;
	getline (cin , player1) ;
	cout << "Enter Player 2's Name: " ;
	getline (cin , player2) ;
	
	cout << "Enter Player 1's Score: ";
	cin >> score1 ;
	cout << "Enter Player 2's Score: ";
	cin >> score2 ;
	
	cout << "\n\n\t Scoreboard" << endl ;
	cout << "-----------------------------------" << endl ;
	cout << "Player   |\tScore " << endl ;
	cout << "-----------------------------------" << endl ;
	cout << player1 << "   |\t" << score1 << endl ;
	cout << player2 << "\t  |\t" << score2 << endl ;
	cout << "-----------------------------------" << endl ;
	if ( score1 > score2 ){
	
		cout << "Winner " << player1 ;
	}
	else if ( score2 > score1 ) 
	{
	cout << "Winner" << player2 << endl ;
	}
	system("pause");
	return 0 ;
	}

