	/********
	Week-4 Lab
	Weekly Assignment 
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	***********/
	
	#include<iostream>
	using namespace std;
	int main()
{
	int days ;
	int years ;
	int months ;
	
	cout << "Input Days : " ; 
	cin	>> days ;
	years = days / 365 ;
	cout << "Years : " << years << endl ;
	days = days % 365 ;
	months = days / 30 ;
	cout << "Months: " << months << endl ;
	days = days % months ;
	cout<<"days  : " << days << endl ;

	system("pause");
	return 0;
}



