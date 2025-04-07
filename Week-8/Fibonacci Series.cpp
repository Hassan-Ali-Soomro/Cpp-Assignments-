	#include <iostream>
	using namespace std ;
	int main()
	{
	int N ;// i=0 , num=0 , total=0;
	int first=0 , second=1 , next=0 ;
	cout << "Enter The Number of terms: " ;
	cin >> N ;
	for ( int i=1 ; i<=N ; ++i ){
	//		cout << i << " " ;
	//		total = (i+num);
	//		cout << total << " " ;
	//		num=i ;
			if(i==1){
				cout << first << " " ;
				continue ;
			}
			if(i==2){
				cout << second << " " ;
				continue ;
			}
			
			next= first+second ;
			first=second ;
			second=next;
			cout << next << " " ;
			
//			for(num ; num ; num){
//				cout << num ;
//			}
	}




	system("pause");
	return 0 ;
	}

