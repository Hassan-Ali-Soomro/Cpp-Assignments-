	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int i , n ;
	float s = 0.0 ;
	cout << "Enter the number of terms: " ;
	cin >> n ; 
	cout << "Harmonic Series: " ;
	for (i=1 ; i <= n ; i++){
		if (i<=n) {
			cout << "1/" << i << " + " ;
			s+= 1 / float(i) ;
		}
	}
	cout << endl << "Total Sum: " << s << endl ;

	system("pause");
	return 0 ;
	}

