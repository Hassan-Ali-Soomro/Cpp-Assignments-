	#include <iostream>
	#include <iomanip> 
 using namespace std;
 int main()
{
 string n_inst ;
 string n_stud	;
 int temp ;
 string food  ;	
 string adj  ;
 string color ;
 string ani  ;
 cout << "Name of Instructor = " ; getline (cin, n_inst) ;
 cout << "Name of Student = " ; getline (cin,n_stud ) ;
 cout << "Any number = " ; cin >> temp ;
 cout << "Any food = " ; cin >> food ;
 cout << "Any Adjective =" ; cin >> adj ;
 cout << "Name of color = " ; cin >> color ;
 cout << "Name of animal =" ; cin >> ani ;
 
 
 cout << "Dear Instructor " << n_inst << endl; 
 cout << "I am sorry that I am unable to turn in my homework at this time." ;
 cout << "First, I ate rotten " <<food<<", which made me turn "<<color<<" and extremely ill.";
 cout << "I came down with a fever of "<<temp<<". Next, my "<<adj<<" pet "<<ani ;
 cout << "must have smelled the remains of the "<<food<<" on my homework, bcause it ate it.";
 cout << "I am currently rewriting my homework and hope you will accept it late."<< endl;
 cout << "Sincerely \n" << n_stud;
 system("pause");
 return 0;
}



