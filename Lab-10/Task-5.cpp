/********************
Programming Fundamentals-Lab
Lab-10
Code written BY: Hassan Ali
Instructor: Nimra Mughal
***********************/
#include <iostream>
#include <string>
using namespace std ;
int main() {
    string text;
    cout << "Enter the text message: " << endl;
    getline(cin, text);

    string ban_words[] = {"profanity", "spam", "kill", "beat", "murder", "hurt"};
	
	int size = sizeof(ban_words) / sizeof(ban_words[0]);
    
	for (int i = 0; i < size ; ++i) {
        size_t pos = text.find(ban_words[i]);
    
	    while (pos != string::npos) {
            text.replace(pos, ban_words[i].length(), "****");
            pos = text.find(ban_words[i], pos + 1);
        }
    }
	cout << endl ;
    cout << "Filtered Text: " << text << endl << endl;
    system("Pause");
    return 0;
}

