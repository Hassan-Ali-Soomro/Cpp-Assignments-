#include <iostream>
#include <string>
using namespace std;
int main() {
    string names[10]; 
    for (int i = 0; i < 10; ++i) {

cout << "Enter name " << (i + 1) << ": ";
        cin >> names[i];
    }

    string searchName;
    cout << "Enter a name to search for: ";
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << searchName << " was found in the list." << endl;
    } else {
        cout << searchName << " was not found in the list." << endl;
    }
    return 0;
}

