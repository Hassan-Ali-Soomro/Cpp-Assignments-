	#include <iostream>
	#include <iomanip>
	using namespace std;
	int main()
  {
	cout << setw(22) << "WELCOME TO ICE-COOL" << endl ;
	float prc_apl_juce = 199.9999 ;
	float prc_orng_juce = 180.888888 ;
	float prc_banana_shak = 170.777777 ;
	cout << "Apple Juice" << setw(6) <<":"<< fixed << setprecision(4) << prc_apl_juce << endl ;
	cout << "Orange juice" << setw(5) <<":"<< fixed << setprecision(5) << prc_orng_juce << endl ;
	cout << "Banana Shake" << setw(5) <<":"<< fixed << setprecision(5) << prc_banana_shak << endl ;


	system("pause");
	return 0;
  } 



