/*******************
	Programming Fundamentals-Lab
	Lab-9
	Code written By: Hassan Ali
*******************/	
#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the number of elements in the array: " ;
    cin >> n ;

    if (n < 3) {
        cout << "The array must have at least 3 elements to find the largest three elements.";
        exit(0);
    }

    int array[n];
    cout << "Enter " << n << " elements of the array:\n";

    for (int i = 0; i < n; i++) {
    	cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    int firstLargest = array [0] ;
    int secondLargest = array [1] ;
    int thirdLargest = array [2] ;

    for (int i = 0; i < n; i++) {
        if (array[i] > firstLargest) {
            thirdLargest = secondLargest ;
            secondLargest = firstLargest ;
            firstLargest = array [i] ;
        }
		else if (array[i] > secondLargest) {
            thirdLargest = secondLargest ;
            secondLargest = array [i] ;
        } 
		else if (array[i] > thirdLargest) {
            thirdLargest = array[i] ;
        }
    }

    cout << "The three largest elements are: " << firstLargest << ", " << secondLargest << ", " << thirdLargest << endl;

    return 0;
}

