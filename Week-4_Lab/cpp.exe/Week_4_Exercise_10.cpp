	/********
	Week-4 Lab
	Weekly Assignment
	BS AI Section(C) 
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	***********/
	#include<iostream>
	#include <iomanip>
	using namespace std;
	int main()
{
	int km ;
	int m ;
	float feet ;
	float inch ;
	int cm ;
	
	cout<<"Input distance in Km = ";
	cin >> km ;
	cout << "----------------------------" << endl ;
	cout << "Distance in Kilometers : " << km << "km" <<endl ;
	m = km * 1000 ;
	cout << "Distance in meters " << setw (5) << ":" << m << "km" << endl ;
	feet = km * 3280.84 ;
	cout << "Distance in feet " << setw (7) << ":" << fixed << setprecision(2) << feet << "ft" << endl ;
	inch = km * 39370.07 ;
	cout << "Distance in inches " << setw (5) << ":" << fixed << setprecision(2) << inch << "in" << endl ; 
	cm = km * 100000 ;
	cout << "Distance in centimeters" << ":" << cm << "cm" << endl ;
	
	system("pause");
	return 0;
}



