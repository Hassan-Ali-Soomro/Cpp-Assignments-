/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
#include <iomanip>
using namespace std ;
	struct list{
		string name ;
		int quantity ;
		float price ;
	};
int main()
{
	int len ;
	cout << "Enter the total number of products: " ;
	cin >> len ;
	list array[len];
	float revenue [len] , total_revenue ;
	cin.ignore() ;
	cout << endl ;
	for(int i=0 ; i<len ; i++){
		cout << "Enter the name of product: " ;
		getline (cin , array[i].name);
		cout << "Enter the price of the product: " ;
		cin >> array[i].price ;
		cout << "Enter the quantity of product: " ;
		cin >> array[i].quantity ;
		revenue [i] = array[i].price * array[i].quantity ;
		total_revenue += revenue[i] ;
		cout << endl ;
		cin.ignore();
	}
	cout << endl ;
	cout << "Bill Card of HAS's Shop" << endl ;
	cout << "S.NO" << "\tProduct Name" << "\tPrice" << "\tQuantity" << "\tRevenue" << endl ;
	for(int i=0 ; i<len ; i++){
		cout << " " << i+1 << "\t" << left << setw(18) << array[i].name  ;
		cout << setw(11) << array[i].price << setw(14) << array[i].quantity << revenue[i] ;
		cout << endl ;
	}
	cout << "Total products = " << len << endl ;
	cout << "Total Revenue of " << len << " products = " << total_revenue << endl ;

	system("Pause") ;
	return 0 ;
}

