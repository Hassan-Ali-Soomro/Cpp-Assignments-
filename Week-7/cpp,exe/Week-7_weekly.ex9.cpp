	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 7 
	Weekly Tasks
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	#include <thread>
	#include <chrono>
	using namespace std ;
	int main() {
    int N , i ;
    cout << "Enter a positive value for N: ";
    cin >> N ;
 	cout << "---------------------------------------\n" ;    
    cout << "**Using \"for\" loop** " << endl ;
    
	for (int i = N; i >= 1; --i) {
        cout << i << " ";
        this_thread::sleep_for(std::chrono::seconds(1)) ;
    }
    i = N ;	
	cout << "\n---------------------------------------\n" ;
    cout << "**Using \"while\" loop** " << endl ;
	while (i>=1){
		cout << i << " " ;
		this_thread :: sleep_for(chrono::seconds(1)) ;
		--i ;	
	}

    return 0;
}

