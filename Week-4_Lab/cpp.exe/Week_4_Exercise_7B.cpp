	/********
	Week-4 Lab
	Weekly Assignment
	BS AI Section(C) 
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	***********/
	#include<iostream>
	using namespace std;
	int main()
{
	int x=2 , y=3 , a=4 , b=10 , c=4 , d=7 , g=6 , v=4 ;
	int A, Z, R, X ;
	
	//For Z=(x+3)X^3/(y-4)(y+5)

	((x+3)*x*x*x) / (y-4)*(y+5)  ;
	Z=((x+3)*x*x*x) / ((y-4)*(y+5));
	cout << "The Value of Z is : " << Z << endl ;

	//For R= 2v+6.22(c+d) / g+v
	
	(2*v+6.22*(c+d)) / (g+v);
	R=(2*v+6.22*(c+d)) / (g+v);
	cout << "The Value of R is : " << R << endl ;

	//For A={7.7b(xy+a)/c-0.8+2b} / (x+a)(1/y)
	
	(7.7*b*(x*y+a)/c-0.8+2*b) / (x+a)*(1/y) ;
	A = (7.7*b*(x*y+a)/c-0.8+2*b) / (x+a)*(1/y) ; 
	cout << "The Value of A is : " << A << endl ;
	
	//For 12x^3/4x + 8x^2/4x + x/8x + 8/8x
	
	(12*x*x*x)/(4*x) + (8*x*x)/(4*x) + x/(8*x) + 8/(8*x);
	X = (12*x*x*x)/(4*x) + (8*x*x)/(4*x) + x/(8*x) + 8/(8*x);
	cout << "The Value of X is : " << X << endl ;
	
	system("pause");
	return 0;
}



