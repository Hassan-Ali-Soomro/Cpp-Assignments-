/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	
	int array[20];
	int i;
	int P = 0;
	int N = 0;
	int O = 0;
	int E = 0;
	int zero = 0;
	
    cout << "Enter 20 numbers for the array:\n";
    
    for ( i = 0; i < 20; i++) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
        
        if ( array[i] > 0 ){
        	P++ ;
		}
		if ( array[i] < 0 ){
        	N++ ;
		}
		if ( array[i] % 2 == 0 ){
        	E++ ;
		}
		if ( array[i] % 2 != 0 ){
        	O++ ;
		}
		if ( array[i] == 0 ){
        	zero++;
		}
		
    }
    cout << endl ;
    cout << "Number of Positive Numbers : " << P << endl;
    cout << "Number of Negative Numbers : " << N << endl;
    cout << "Number of Odd Numbers : " << O << endl;
    cout << "Number of Even Numbers : " << E << endl;
    cout << "Number of Zero  : " << zero << endl;
    
	return 0;
}


