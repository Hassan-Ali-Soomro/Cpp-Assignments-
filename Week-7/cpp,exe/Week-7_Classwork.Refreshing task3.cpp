	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Weekly Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int initial , end , t ;
	cout << "Enter the starting number: " ;
	cin >> initial ;
	cout << "Enter the ending number: " ;
	cin >> end ;
	t = end - initial ;
	cout << "Running for " << t << " seconds..." << endl ;
	for  ( initial ; initial>=end ; --initial ){
		cout << initial << " ";
	}
	cout << endl << endl ;
	system("pause");
	return 0 ;
	}

