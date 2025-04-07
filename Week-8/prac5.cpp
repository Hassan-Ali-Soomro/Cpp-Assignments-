#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int height;
    
 	do { 
    cout << "Enter the positve value for height: ";
    cin >> height;
	} while( height < 1 );
	
	cout <<endl <<endl;
	cout << "Style1: upper filled triangle" <<endl;
	 
    for (int i = 1; i <= height; i++) {
 
        // Print increasing numbers
        for (int j = i; j <= height; j++) {
            cout << j << " ";
        }
 
        // Move to the next line
        cout << endl;
    }

	cout <<endl <<endl;
	cout << "Style2: bottom filled triangle" <<endl;
 
    for (int i = 1; i <= height; i++) {
 
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
 
        // Move to the next line
        cout << endl;
    }
    cout <<endl;
    
    return 0; // Exit the program with success
}
 

