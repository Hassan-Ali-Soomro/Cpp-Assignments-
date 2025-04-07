/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
#include <iomanip>
using namespace std ;
	struct student{
		string name ;
		unsigned int course ;		
	};
int main(){
	int num ;
	cout << "How many students do you want to enroll: " ;
	cin >> num ;
	student arr [num] ;
	cout << "Write the names of the students and number of courses to add" << endl ;
	cin.ignore() ;
	for(int i=0 ; i<num ; i++){
		cout << "Student " << i+1 << " name: " ;
		getline (cin , arr [i].name);
		cout << "Courses (1-6): " ; cin >> arr[i].course ;
		if(arr[i].course > 6) {
			cout << "You can enroll in maximum 6 courses." << endl ;
			cout << "Please enter the valid number of courses(1-6): " ;
			cin >> arr[i].course ;
		}
		cin.ignore();
	}
	cout << endl ;
	cout << "S.No\tName" << setw(25) << "No.of courses" << endl ;
	for(int i=0 ; i<num ; i++){
		cout << " " << i+1 << "\t" << left << setw(20) << arr[i].name << arr[i].course ;
		cout << endl ;
	}
	cout << endl ;
	system ("Pause");
	return 0 ;
}

