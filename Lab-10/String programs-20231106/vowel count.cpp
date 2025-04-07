#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a sentence: ";
    string sentence;
    getline(cin, sentence);

    int vowelCount[5] = {0}; // Initialize an array to store the counts of 'a', 'e', 'i', 'o', 'u'.

    for (int i = 0; i <= sentence.length(); i++ ) {
        char lowercaseC = tolower(sentence[i]); // Convert the character to lowercase.

        if (lowercaseC == 'a') {
            vowelCount[0]++;
        } else if (lowercaseC == 'e') {
            vowelCount[1]++;
        } else if (lowercaseC == 'i') {
            vowelCount[2]++;
        } else if (lowercaseC == 'o') {
            vowelCount[3]++;
        } else if (lowercaseC == 'u') {
            vowelCount[4]++;
        }
    }

    cout << "Vowel frequencies in the sentence:" << endl;
    cout << "a: " << vowelCount[0] << " times" << endl;
    cout << "e: " << vowelCount[1] << " times" << endl;
    cout << "i: " << vowelCount[2] << " times" << endl;
    cout << "o: " << vowelCount[3] << " times" << endl;
    cout << "u: " << vowelCount[4] << " times" << endl;

    return 0;
}

