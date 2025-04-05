	/********************
	Progrsmming Fundamentals- lab
	BS AI Section (C)
	Week 4 
	Class Work
	Instructor: Nimra Mughal
	Code written By: Hassan Ali
	*///////////////////////// 
	#include <iostream>
	#include <iomanip>
	using namespace std ;
	int main() {
    float weight, height, bmi;

	cout << " Enter your weight in kilograms: ";
    cin >> weight;

    cout << " Enter your height in meters: ";
    cin >> height;

    
    bmi = weight / (height * height);
	cout << " Your BMI is: " << fixed << setprecision(2) << bmi << endl;

    // Classification of the BMI
    if (bmi < 18.5) {
    cout << " Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) 
	{
    cout << " Normal weight" << endl;
    } else if (bmi >= 25 && bmi < 29.9)
	{
  	
    cout << " Overweight" << endl;
    } else {
    cout << " Obese" << endl;
    }

    return 0;
}

