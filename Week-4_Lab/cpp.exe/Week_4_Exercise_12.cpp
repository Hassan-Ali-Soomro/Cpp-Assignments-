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
	float juice_price , bread_price , milk_price ;
	int juice_quantity , bread_quantity , milk_quantity ;
	float juice_cost , bread_cost , milk_cost ;
	float total_cost ;
	
	cout << "Input the Price of Apple Juice : " ; cin >> juice_price ;
	cout << "Input the Price of Bread :  " ; cin >> bread_price ;
	cout << "Input the Price of Milk : " ; cin >> milk_price ;
	cout << "Quantity of Juice : " ; cin >> juice_quantity ;
	cout << "Quantity of Bread : " ; cin >> bread_quantity ;
	cout << "Quantity of Milk : " ; cin >> milk_quantity ;
	
	juice_cost = juice_price * juice_quantity ;
	bread_cost = bread_price * bread_quantity ;
	milk_cost = milk_price * milk_quantity ;
	
	cout << "##################################" << endl ;
	
	cout << "Cost of Apple juice : " << juice_cost << endl ;
	cout << "Cost of Bread " << setw(8) << ": "<< bread_cost << endl ;
	cout << "Cost of Milk : " << setw(7) << ": " << milk_cost << endl ;
	cout << "-------------------------------------------" << endl ;
	
	total_cost = juice_cost + bread_cost + milk_cost ;
	
	cout << "Total Cost " << setw(11) << ": " << total_cost << endl ;


	system("pause");
	return 0;
}



