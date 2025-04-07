/********************
Programming Fundamentals-Lab
Lab-10
Code written BY: Hassan Ali
Instructor: Nimra Mughal
***********************/
#include <iostream>
#include <string>
using namespace std ;

int main(){
	string sentence ;
	int ch1 = 0  , ch2 = 0 ;
	cout << "Write a sentence:" << endl ;
	getline(cin , sentence) ;
	
	for(int i=0 ; i < sentence.length() ; i++){
		//(int j=0 ; j < sentence.length() ; j++){
		if( 'H'==sentence[i] || 'h'==sentence[i])	{
			ch1++ ;
		}
		if( 'A'==sentence[i] || 'a'==sentence[i]){
			ch2++ ;
		}
	}
//	cout << endl << sentence ;
	cout << "The word h in above sentence is mentioned " << ch1 << " times." << endl ;
	cout << "The word a in above sentence is mentioned " << ch2 << " times." << endl ;	
//	cout << "The character at index 6 is " << sentence[1] << endl; 
	system ("Pause");
	return 0 ;
}

