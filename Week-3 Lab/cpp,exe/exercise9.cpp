	#include<iostream>
	using namespace std;
	int main()
{
	string p1 , p2 ;
	int sc1 , sc2 ;
	
	cout << "Enter Player 1's Name :" ;
	cin>> p1;
	cout << "Enter Player 1's Score :" ;
	cin >> sc1 ;

	cout << "Enter Player 2's Name :" ;
	cin>> p2;
	cout << "Enter Player 2's Score :" ;
	cin >> sc2 ;

	cout << "\nScoreboard\n";
    cout << "-----------\n";
    cout << "Player 1: " << p1 << " \t Score: " << sc1 << endl;
    cout << "Player 2: " << p2 << " \t Score: " << sc2 << endl;
    cout << "-----------\n";
    
    if (sc1 > sc2) 
	{
    cout <<p1<< "is winner";
    } 
	else if (sc2 > sc1) 
	{
    cout <<p2<< " is winner ";
    } 
	else if (sc1 = sc2)
	{
    cout << " Tie";
    }
	system("pause");
	return 0;
}



