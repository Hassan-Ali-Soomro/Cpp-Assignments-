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
	cout << "Enter any number (1-12): " ;
	cin >> num ;

	switch (num) {
		case 1:
			cout << " January" << endl ;
			break ;
		case 2:
			cout << " Febuary" << endl ;
			break ;
		case 3 :
			cout << " March" << endl ;
			break ;
		case 4 :
			cout << " April" << endl ;
			break ;
		case 5:
			cout << " May" << endl ;
			break ;
		case 6:
			cout << " June" << endl ;
			break ;
		case 7:
			cout << " July" << endl ;
			break ;
		case 8:
			cout << " August" << endl ;
			break ;
		case 9:
			cout << " September" << endl ;
			break ;
		case 10:
			cout << " October" << endl;
			break ;
		case 11:
			cout << " November" << endl ;
			break ;
		case 12:
			cout << " December" << endl ;
			break ;
		default:
			cout << " Invalid choice" << endl ;
			break ;
}
	system("pause");
	return 0 ;
	}

