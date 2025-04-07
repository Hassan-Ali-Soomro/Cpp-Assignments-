/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std ;

int main()
{
	int arr [5] , num ;
	int frequency [5] = {0};
	
	cout << "Enter any 5 integers: " ;
	for(int i=0 ; i<5 ; i++){
		cin >> num ;
		arr[i] = num ;
	}
	
	for (int i=0 ; i<5 ; i++){
		int count=1 ;
		for (int j=i+1 ; j<5 ; j++){
			if(arr[i] == arr[j]){
				count++ ;
				frequency[j] = -1 ;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count ;
		}
	}

	for(int i=0 ; i<5 ; i++){
		if(frequency [i] != -1){
			cout << "Number " << arr[i] << " appears " << frequency[i] << " times." << endl ;
		}
	}

	system("Pause") ;
	return 0 ;
}

