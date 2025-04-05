	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 5 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	using namespace std;
	int main(){
	
	int age, marks;
	
	cout<<"Enter Student's Age: ";
	cin >> age;
	
	cout << "Enter Student's Marks: " ;
	cin >> marks;

	bool exp = (age >= 18 && age <= 25 ) && (marks >=85);
	cout << "Person eligible for scholorship? " << exp << endl;
	
	system("PAUSE");
	return 0;
}

