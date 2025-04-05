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
	int daily_rate , days , total ; 
	
	cout << " Enter the daily rate in PKR : " ;
	cin >> daily_rate ; 
	
	cout << " Input the number of days : ";
	cin >> days ;
	
	cout << "------------------------------------" << endl ;
	total = daily_rate * days ;
	cout << " The total cost of renting the car for " << days << " days is : " << total << endl ;
	 
	system("pause");
	return 0;
}



