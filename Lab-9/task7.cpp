/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std ;
int main()
{
	int num=1, positive ;
	cout << "Enter the numbers: " ;
	while (num > 0){		
		cin >> num ;
		if(num < 0)
		break ;
		positive++ ;
	}

	cout << "Number of positive numbers: " << positive << endl ;
	
	system("Pause") ;
	return 0 ;
}

