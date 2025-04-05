	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 6 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int price ;
	cout << "Enter the total purchase amount: "	;
	cin >> price ;

	if (price >= 100 && price <= 199){
		cout << "You qualify for a 10% discount. " << endl ;
	}else if (price >= 200 && price <= 299)
	{
			cout << "You qualify for a 20% discount. " << endl ;
	}else if (price>=300 )
	{
	
		cout << "You qualify for a 30% discount. " << endl ;
	}else {
	
		cout << " No discount for purchases below $100. " << endl ;
}
	system("pause");
	return 0 ;
	}


