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
	int day ;
	cout << "Input any number between 1 to 7: " ;
	cin >> day ;
	 switch (day) {
	 	case 1:
	 		cout << "Sunday" << endl ;
	 		break ;
	 	case 2:
	 		cout << "Monday" << endl ;
	 		break ; 		
	 	case 3:
	 		cout << "Tuesday" << endl ;
	 		break ;
	 	case 4:
	 		cout << "Wednesday" << endl ;
	 		break ;
	 	case 5:
	 		cout << "Thursday" << endl ;
	 		break ; 		
 		case 6:
	 		cout << "Friday" << endl ;
	 		break ;	 		
	 	case 7:
	 		cout << "Saturday" << endl ;
	 		break ;
	 	default :
		 cout << "Error"	 ;
		 break ;
}
	system("pause");
	return 0 ;
	}

