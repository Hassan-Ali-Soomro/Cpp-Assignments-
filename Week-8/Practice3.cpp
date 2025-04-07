	#include <iostream>
	using namespace std;
	int main() {
		
	int height;
	cout << "Enter the height of Triangle: ";
	cin >> height;
	while (height <= 0) {
		cout << "Please enter a positive integer for the height." << endl;
		cout << "--------------------------------------------" << endl ;
		cin >> height ;
	}
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*" ;
	}
	cout << endl;
	}
		cout <<endl;
		return 0; 
	}
