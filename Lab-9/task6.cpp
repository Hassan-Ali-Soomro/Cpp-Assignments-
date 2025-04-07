/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std ;
int main()
{
	float num, array[6] ;
	float sum=0.0 ;
	for(int i=0 ; i<6 ; i++) {
		cout << "Enter the value " << i+1 << ": " ;
		cin >> num ;
		array [i] = num ;	
		sum += num ;
	}
//	for(int i=0 ; i<6 ; i++){
//		cout << array [i] << endl ;
//	}
	float average = sum/6 ;
	cout << "Total sum of the array is: " << sum << endl ;
	cout << "The average of the array is: " << average << endl ;
	system("Pause") ;
	return 0 ;
}

