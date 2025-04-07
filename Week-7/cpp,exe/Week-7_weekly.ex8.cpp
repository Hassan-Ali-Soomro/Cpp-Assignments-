	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Weekly Tasks
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int i = 1 , e = 10 , num;
	cout << "Enter the number: " ;
	cin >> num ;
	cout << "Multilpication table for " << num << ": \n";
	for (i ; i<=e ; i++){
		cout << num << " x " << i << " = " ;
		cout << num*i << endl ;
	}
	system("pause");
	return 0 ;
	}
