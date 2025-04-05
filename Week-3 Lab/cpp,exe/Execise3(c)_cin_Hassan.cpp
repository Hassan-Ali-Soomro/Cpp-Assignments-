#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num1;
	int num2;
	cout<< "Input two numbers"<<endl;
	cin>> num1;
	cin>> num2;
	
	cout<<setw(num1) <<num1<<endl;
	cout<<setw(num2) <<num2<<endl;

system("pause");
return 0;
}


