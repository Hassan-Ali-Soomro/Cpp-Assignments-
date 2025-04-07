#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int year, month, first_day;
 
    // Input the year and month
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter first day of the month\n(1-7)(Sun-Sat): ";
    cin >> first_day;
 
	cout << endl; 
    cout << "Calendar for " << month << "/" << year << endl;
	cout <<"**********************"<<endl;
    // Define the names of the days of the week
    cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl;
 
    // Print the calendar
    int day = 1;
    for (int i = 1; i <= 6; ++i) { // Assume no month spans more than 6 weeks
        for (int j = 1; j <= 7; ++j) {
            if (i == 1 && j < first_day) {
                cout << setw(6) <<""; // Print empty space for days before the 1st
            } 
			else if (day <= 31) { // Assuming no month has more than 31 days
                if (day < 10) {
                    cout << " ";
                }
                cout << day << "    ";
                ++day;
            }
        }
        cout << endl;
        if (day > 31) {
            break; // Break if all days of the month have been printed
        }
    }
 
    return 0;
}
 
