#include <iostream> 
#include <iomanip>
#include <cfloat>
using namespace std; 
 
	int main() 
	{ 
	cout << setw (18) << "Marks of student" << endl ;
	int stud_M1 ;
	int stud_M2 ; 
	int stud_M3 ;
	cin >> stud_M1 >> stud_M2 >> stud_M3 ;
	cout << "Afifa Nadeem" << setw(15) << stud_M1 << endl;
	cout << "Afifa Nazeer" << setw(15) << stud_M2 << endl;
	cout << "Afifa Saleem" << setw(15) <<stud_M3 << endl ;
	int sum_marks = stud_M1 + stud_M2 + stud_M3 ;
	cout << "Total ";

	cout << setw(19) << "=" << sum_marks;

	int averg_marks = sum_marks / 3 ;
	cout << endl << "Average marks " ;
	cout << setw (11) << "=" << averg_marks;
	system("pause");

    return 0; } 
 
 
