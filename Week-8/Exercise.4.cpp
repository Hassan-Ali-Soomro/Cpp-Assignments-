	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 8
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std ;
	int main()
	{
	int i , n_course , marks , average , total=0;
	float averg , percentage ;
	string result ;
	cout << "Enter the number of courses (4-7): " ;
	cin >> n_course;
	
	while (!(n_course>=4 && n_course<=7)){
		cout << "Please Enter the number between 4 and 7: " ;
		cin >> n_course ;	
	}
	for ( i=1 ; i<=n_course ; i++ ){
		cout << "Enter the marks of course: " << i << ": " ;
		cin >> marks ;
			while (!(marks > 0 && marks < 50) ){
				cout << "Please enter marks between 0-50: " ;
				cin >> marks ;
	}
			total += marks ;	 
			}	
	cout << "Total Marks: " << total << endl ;
	averg = total / float(n_course) ;
	cout << "Average Marks: " << averg << endl ;
	percentage = (total * 100)/((float)n_course * 50);
	cout << "Total Percentage: " << percentage << endl ;
	cout << "Result: " << ((percentage > 60)? "Pass" : "Fail" ) << endl ;
	system("pause");
	
	return 0 ;
	}

