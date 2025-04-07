#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int height;
 
    cout << "Enter the height of Triangle: ";
    cin >> height;
 
	for (int i = 1; i <= height; i++) {
 
        // Print increasing numbers
        for (int j = i; j <= height; j++) {
            cout << (char)(j+64) << " ";
        }
 
        // Move to the next line
        cout << endl;
    }
    
    cout <<endl <<endl;
 
    for (int i = 1; i <= height; i++) {
 
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << (char)(j+64)<< " ";
        }
 
        // Move to the next line
        cout << endl;
    }
    cout <<endl;
 
    return 0; // Exit the program with success
}
 

