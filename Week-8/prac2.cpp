#include <iostream>
using namespace std;
int main(){
int row=4, height=5;
cout <<"Enter the values of height and rows: ";
//cin >> height >> row;
 
for (int i = 1; i<=row; i++){
	for (int j=1; j<=height; j++)
	{
		cout <<"* ";
	}
	cout <<endl;
}
 
cout <<endl <<endl;
system("PAUSE");
return 0;
}

