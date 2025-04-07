#include <iostream>
using namespace std;
int main(){
	int start, end;
	cout << "Enter the start and end of the loop: "; cin >> start >> end;
	
	for (int i=start; i<=end; i++){
		cout << i << "\t";
	}

	cout <<endl;
	system("PAUSE");
	return 0;
}

