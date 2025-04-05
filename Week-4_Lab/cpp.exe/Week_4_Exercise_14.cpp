	/********
	Week-4 Lab
	Weekly Assignment
	BS AI Section(C) 
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	***********/
	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main()
{
	// Meauremets of Rectangle
	float l , w , A , P ;
	
	cout << "Enter the Length : " ; cin >> l ;
	cout << "Enter the Width : " ; cin >> w ;
	cout << "-----------------------------------------------" << endl;
	
	A = l * w ;
	P = 2*(l + w);

	cout << "The Length of Rectangle is : " << l << endl ;
	cout << "The Width of Rectsngle is  : " << w << endl ;
	cout << "The Area of Rectsngle is   : " << A << endl ;
	cout << "The Perimeter of Rectangle is : " << P << endl ;

	cout << "-----------------------------------------------" << endl ;
	 
	// Measurements of Circle
	 
	float Area , C , pie=3.142 , r ;
	cout << "Input the value of radius : " ;
	cin >> r ;
	
	Area = pie * r ;
	C = 2 * pie * r ;
	
	cout << "The area of the circle is : " << fixed << setprecision(2) << Area << endl ;
	cout << "The circumference of the circle is : " << fixed << setprecision(2) << C << endl ;
	
	system("pause");
	return 0;
}



