	#include <iostream>
	using namespace std;

	int main() 
{
    string name, favorite_color;
    int age;
	
    cout << "Enter Your Name: ";
    cin >> name ; cout << endl ;
	cout << "Enter Your Age: ";
    cin >> age; cout << endl ;
    cout << "Enter Your Favorite Color: ";
    cin >> favorite_color ; cout << endl ;
    cout << "---------------------\n";
    cout << "Name: \t\t" << name << endl;
    cout << "Age: \t\t" << age << " years old" << endl;
    cout << "Favorite Color: " << favorite_color << endl;
	system("pause");
    return 0;
}

