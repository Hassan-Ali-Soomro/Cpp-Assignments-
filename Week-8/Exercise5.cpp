	#include <iostream>
	using namespace std ;
	int main()
	{
	int height;
	do {
	cout << "Enter the positve value for height: ";
	cin >> height;
	} while( height < 1 );for (int i = 1; i <= height; i++) {
	// Print increasing numbers
	for (int j = height; j >= i; j--) {
	cout << j << " ";
	}
	cout <<endl;
}
	
	for (int i = 1; i <= height; i++) {
 
        for (int j = i; j <= height; j++) {
            cout << (char)(70-j) << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= height; j++) {
	cout << j << " ";
	}
	cout <<endl;}
	for (int i = 1; i <= height; i++) {
        for (int j = i; j <= height; j++) {
            cout << (char)(64+j) << " ";
        }
        cout << endl;
    }




	system("pause");
	return 0 ;
	}

