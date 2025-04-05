	/********************
	Programming Fundamentals- lab
	BS AI Section (C)
	Week 5 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	float price ;
	int quantity ;
	cout << "Enter the price of the item: " ;
	cin >> price ;
	cout << "Enter the quantity of items: " ;
	cin >> quantity ;
	string discount ;
	discount = (( price >= 100 ) && ( quantity>= 5 ) ) ? "You can get the discount":"You can't get the discount";
	cout << discount << endl ;
	system("pause") ;
	return 0 ;
	}
	

