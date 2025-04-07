/********************
Programming Fundamentals-Lab
Lab-10
Code written BY: Hassan Ali
Instructor: Nimra Mughal
***********************/
#include <iostream>
using namespace std;

int main() {
    string ID_Name;
    string Password;
    int i;

    cout << "Enter user name: ";
    getline(cin, ID_Name);

    do {
        cout << "Enter user password: ";
        cin >> Password;

        bool hasUpper = false;
        bool hasLower = false;
        bool hasDigit = false;
        bool hasSpecial = false;

        for (i = 0; i < Password.length(); i++) {
            if (isupper(Password[i])) {
                hasUpper = true;
            }
            if (islower(Password[i])) {
                hasLower = true;
            }
            if (isdigit(Password[i])) {
                hasDigit = true;
            }
            if (!isalnum(Password[i])) {
                hasSpecial = true;
            }
        }

        if (Password.length() < 8) {
            cout << "Password must be at least 8 characters long.\n";
        }
        else if (!hasUpper) {
            cout << "Password must contain at least one uppercase letter.\n";
        }
        else if (!hasLower) {
            cout << "Password must contain at least one lowercase letter.\n";
        }
        else if (!hasDigit) {
            cout << "Password must contain at least one digit.\n";
        }
        else if (!hasSpecial) {
            cout << "Password must contain at least one special character.\n";
        }
        else {
            cout << "Your account has been created successfully.\n";
            break;
        }
    } while (true);

    system("Pause");
    return 0;
}

