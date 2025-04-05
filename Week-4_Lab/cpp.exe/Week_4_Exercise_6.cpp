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
	float basic_salary , dearness_allowance , rent_allowance  , gross_salary ;
	cout << " Enter Basic Salary : " ;
	cin >> basic_salary ;
	dearness_allowance = 0.4 * basic_salary ;
	rent_allowance = 0.2 * basic_salary ;
	gross_salary = basic_salary + dearness_allowance + rent_allowance ;
	
	cout << " The Basic Salary is : " << basic_salary << endl ;
	cout << " The Dearness Allowance is : " << dearness_allowance << endl ;
	cout << " The Rent Allowance is :  " << rent_allowance << endl ;
	cout << " The Gross Salary is : " << gross_salary << endl ;

	system("pause");
	return 0;
}



