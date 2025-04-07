/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
	#include <iostream>
	using namespace std ;
	int main()
{
	int num, arr [10] ;
	cout << "Enter any 10 numbers." << endl ;
	for(int i=0 ; i<10 ; i++){
		cout << "Enter the number " << i+1 <<": " ;
		cin >> num ;
		arr [i] = num ;
	}
	int smallest = arr [0], ssmallest = arr [1], largest = arr [0], slargest = arr [1] ;
	for(int i=1 ; i<10 ; i++){
		if(arr [i] > largest ){
			slargest = largest ;
			largest = arr [i] ;
		}
		else if(arr [i] > slargest){
			slargest = arr [i] ;
		}		
	}
	for(int i=1 ; i<10 ; i++){
		if(arr [i] < smallest ){
			ssmallest = smallest ;
			smallest = arr [i] ;
		}
		else if(arr [i] < ssmallest){
			ssmallest = arr [i] ;
		}		
	}
	
	cout << "The second largest number is: " << slargest <<endl ;
	cout << "The second smallest number is: " << ssmallest <<endl ;
	system("Pause") ;
	return 0 ;
}

