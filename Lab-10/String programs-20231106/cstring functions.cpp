#include <iostream>
#include <cstring>
 
using namespace std;
 
int main ()
{
 
    char str1[20] = "Hello world! ";
    char str2[20] = "How are you";
    char str3[50];
    int  len ;
 
    // copy str1 into str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;
 
    // concatenates str1 and str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
 
    // total lenghth of str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
 
    // String case conversion using cctype functions
    string mixedCase = str1;
    for (int i = 0; i < mixedCase.length(); ++i) {
        mixedCase[i] = toupper(mixedCase[i]); // Convert to uppercase
    }
    cout << "Uppercase string: " << mixedCase << endl;
 
    for (int i = 0; i < mixedCase.length(); ++i) {
        mixedCase[i] = tolower(mixedCase[i]); // Convert to lowercase
    }
    cout << "Lowercase string: " << mixedCase << endl;
 
    return 0;
}

