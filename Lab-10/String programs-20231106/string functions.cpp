#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize strings
    string str1 = "Hello, ";
    string str2 = "world!";
    string str3;

    // Concatenation using + operator
    str3 = str1 + str2;
    cout << "Concatenation (+ operator): " << str3 << endl;

    // Length of a string using length() or size() function
    cout << "Length of str3: " << str3.length() << " or " << str3.size() << " characters" << endl;


    // Accessing characters in a string using []
    cout << "Character at index 7: " << str3[7] << endl;

    // Substring using substr() function
    string substring = str3.substr(0, 5);
    cout << "Substring (0-4): " << substring << endl;
	
    // Find a substring using find() function
    int found = str3.find("world");
    if (found != string::npos) {
        cout << "Found 'world' at position " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    // Replace a substring using replace() function
    str3.replace(7, 5, "there");
    cout << "After replacement: " << str3 << endl;

    // Check if a string is empty using empty() function
    if (str3.empty()) {
        cout << "str3 is empty." << endl;
    } else {
        cout << "str3 is not empty." << endl;
    }

    // Compare strings using compare() function
    string str4 = "Hello, there!";
    int comparison = str3.compare(str4);
    if (comparison == 0) {
        cout << "str3 and str4 are equal." << endl;
    } else if (comparison < 0) {
        cout << "str3 is less than str4." << endl;
    } else {
        cout << "str3 is greater than str4." << endl;
    }

    return 0;
}

