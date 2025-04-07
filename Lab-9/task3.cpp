/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std;
int main() {
    int array1 [10] , array2 [10] ; 
	int num=0 ;
    cout << "Enter 10 numbers for the array:\n" ;
    
    for (int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << " : " ;
        cin >> array1 [i] ;
    }
    
    for (int i = 9 ; i >=0 ; i--) {
	    	array2 [num] = array1 [i] ;		
			num++ ;
    }
    
	cout << "Array-2" << endl ;
	for (int i = 0; i < 10; i++) {
       cout << array2 [i] << " " ;
    }
    cout << endl ;
	system("Pause") ;
    return 0;
}

