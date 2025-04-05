	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 6 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	#include <iomanip>
	using namespace std ;
	int main()
	{
	int choice ;
	cout << "Choose a shape to display: " << endl ;
	cout << "1.Circle \n2.Right Triangle \n3.Isosceles Triangle \n4.Rectangle \n5.Square " << endl;
	cout << "Enter your choice (1-5): " ;
	cin >> choice ;
	switch (choice) 
	{
		case 1:
			cout <<"       *  *  * " <<endl;
			cout <<"     *         *" <<endl;
			cout <<"    *           *" <<endl;
			cout <<"    *           *" <<endl;
			cout <<"    *           *" <<endl;
			cout <<"     *         *" <<endl;
			cout <<"       *  *  *" <<endl;
			break ;
		case 2:
			cout << setw(15) << "*" <<endl;
			cout << setw(15) << "*" <<setw(2) << "*"<< endl;
			cout << setw(15) << "*" <<setw(4) << "*"<< endl;
			cout << setw(15) << "*" <<setw(6) << "*"<< endl;
			cout << setw(15) << "*" <<setw(8) << "*"<< endl;
			cout << setw(15) << "*" <<setw(10) << "*" << endl;
			cout << setw(15) << "*" <<setw(12) << "*" << endl;
			cout << setw(30) << "* * * * * * * * " << endl ;
			break ;
		case 3:
			cout << setw(15) << "*" << endl;
			cout << setw(14) << "*" << setw(2) << "*" << endl;
			cout << setw(13) << "*" << setw(4) << "*" << endl;
			cout << setw(12) << "*" << setw(6) << "*" <<endl;
			cout << setw(11) << "*" << setw(8) << "*" << endl;
			cout << setw(10) << "*" <<setw(10) << "*" <<endl;
			cout << setw(9) << "*" << setw(12) << "*" << endl;
			cout << setw(23) <<"* * * * * * * * " << endl;
			break ;
		case 4:
			cout << setw(20) << "* * * * * * * * * * * *" << endl;
			cout << "*" << setw(22) << "*" << endl ;
			cout << "*" << setw(22) << "*" << endl ;
			cout << "*" << setw(22) << "*" << endl ;
			cout << setw(21) << "* * * * * * * * * * * *" << endl ;
			break ;
		case 5:
			cout << setw(20) << "* * * * * * * *" << endl ;
			cout << setw(6) << "*" << setw(14) << "*" << endl ;
			cout << setw(6) << "*" << setw(14) << "*" <<endl ;
			cout << setw(6) << "*" << setw(14) << "*" << endl ;
			cout << setw(6) << "*" <<setw(14) << "*" << endl ;
			cout << setw(6) << "*" << setw(14) << "*" << endl ;
			cout << setw(6) << "*" << setw(14) << "*" << endl ;
			cout << setw(21) << "* * * * * * * * " << endl ;
			default:
			cout << "Invalid Choice" << endl ;
			break ;	
	}
	system("pause");
	return 0 ;
	}

