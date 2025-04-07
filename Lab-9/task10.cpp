/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std ;
int main()
{
	int N, temp ;
	bool order = true ;
	cout << "Enter a value for N: " ;
	cin >> N ;
	int arr [N] ;
	cout << "Enter " << N << " Integers: " ;
	for (int i=0 ; i<N ; i++){
		cin >> arr [i] ;
	}

	for (int i=0 ; i<N-1 ; i++){
		if(arr [i] > arr [i+1]){
			order = 0 ;
			break ;
		}		
	}
	if (order==0 ){
	cout << "The array is not sorted in ascending order." << endl ;
	cout << "The sorted array in ascending order: " << endl ;
		for(int i=0 ; i<N-1 ; i++){
			for(int j=0 ; j<N-1-i ; j++)
			{
				if(arr [j] > arr [j+1] ){
				temp = arr [j] ;
				arr [j] = arr [j+1] ;
				arr [j+1] = temp ;
			}			
		}
	}
		for (int k=0 ; k<N ; k++) {
			cout << arr [k] << "\t" ;
		}
}	
	else if (order==true){
		cout << "The array is sorted in ascending order." << endl ;
	}
	system("Pause") ;
	return 0 ;
}

