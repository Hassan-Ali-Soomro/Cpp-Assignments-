	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 5 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include<iostream>
	using namespace std;
	int main()
{
	int a , b , x , y , ans ;
	cout << "Input the value of a: " ;
	cin >> a ;
	cout << "Input the value of b: " ;
	cin >> b ; 
	cout << "Input the value of x: " ;
	cin >> x ;
	cout << "Input the value of y: " ;
	cin >> y ;
	ans = ( 5 * b * b * x ) - ( 3 * a * y * y ) - ( 8 * b * b * x ) + ( 10 * a * y ) ;
	cout << "#####################################" << endl ;
	cout << "5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y = " << ans << endl;
	system("pause");
	return 0;
}



