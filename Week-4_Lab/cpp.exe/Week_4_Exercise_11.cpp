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
	string title , author ;
	int quantity ;
	float price ;
	float total_cost ;
	 
	cout << "Input the Title of Book: " ;
	getline(cin , title) ;
	
	cout << "Input the Name of The Author: " ;
	getline (cin , author) ;
	
	cout << "Input the Price of the Book: " ;
	cin >> price ;
	
	cout << "Input the Number of Books: " ;
	cin >> quantity ;
	
	total_cost = price * quantity ;
	
	cout << "\tHassan Bookstore" << endl ;
	cout << "---------------------------" << endl ;
	cout << "\tStore Reciept " << endl << endl ;

	cout << "Book" << setw(16) << ": " << title << endl ;
	cout << "Author of Book" << setw(6) << ": " << author << endl ;
	cout << "Price of Book" << setw(7) << ": " << price << endl ;
	cout << "Quantity of Books" << setw(3) << ": " << quantity << endl ;
	cout << "Total Cost " << setw(9) << ": " << total_cost << endl ;


	system("pause");
	return 0;
}



