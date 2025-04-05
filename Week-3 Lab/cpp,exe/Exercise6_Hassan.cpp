 #include <iostream>
 #include <iomanip>
 using namespace std;

 int main()
{
 cout << "====student progress card=====" << endl;
 string name = "John Doe" ; 
 int roll_no = 11 ;
 float s1 , s2, s3 ;
 float total = 300 ;
 float per ;
 cin >> s1 >> s2 >> s3 ;
 cout << "Name: " << setw(17) << name << endl; 
 cout << "Roll No :" << setw(12) << roll_no << endl ; 
 cout << "-----------------------------" << endl ;
 cout << "Subject" << setw(16) << "Marks" << endl ;
 cout << "MATHS" << setw(17) << s1 << endl ;
 cout << "Physics" << setw(15) << s2 << endl ;
 cout << "Chemistry" << setw(13) << s3 << endl ;
 cout << "-----------------------------" << endl ;
 float s4 = s1 + s2 + s3 ; 
 float s5 = (s4/3);  
 cout << "Total" << setw(18) << s4 << endl ;
 cout << "Average" << setw(15) << (s4/3) << endl;
 per = s4/total*100 ;
 cout << "Percentage" << setw(12) << per << "%" ;

system ("pause");
	return 0;
}

