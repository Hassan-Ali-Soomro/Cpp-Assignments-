/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std ;
int main()
{
	int size , sum=0 ;
	cout << "Enter the size of the array: " ;
	cin >> size ;
	int arr [size] ;
	for (int i=0 ; i<size ; i++ ){
		cout << "Enter the value: " ;
		cin >> arr [i] ;
		sum += arr [i] ;
	}
	int average = sum/size , large=arr [0] , small=arr [0] ;

	for(int i=1 ; i<size ; i++) {
		if (large < arr [i])
		large = arr[i] ;
	}
	for(int i=1 ; i<size ; i++) {
		if (small > arr [i])
		small = arr[i] ;
	}
	cout << endl ;
	cout << "The sum of the array is: " << sum << endl ;
	cout << "The average of the array is: " << average << endl ;
	cout << "The largest number in the array is: " << large << endl ;
	cout << "The smallest number in the array is: " << small << endl ;
	system("Pause") ;
	return 0 ;
}

