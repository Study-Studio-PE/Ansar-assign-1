#include<iostream>
using namespace std;
int main()
{
	float temp,fahren,cel;
	cout<<"Temperature Given in fahrenheit 64F"<<endl;
	cout<<"Temperature Given in celsius 16C"<<endl;
	cout<<"Fahrenheit to Celsius"<<endl;
	cel=16;
	fahren=9/5*cel+32;
	cout<<"Fahrenheit to Celsius= "<<fahren<<endl;
	fahren=64;
	cel=(fahren-32)*5/9;
	cout<<"Celsius to Fahrenheit= "<<cel<<endl;
}



// Algorithm of Program:
// Step 1: Start
// Step 2: Create variables 
// Step 3: Put temperature value
// Step 4: Store the temperature
// Step 5: Apply formula
// Step 6: Display Temperature in Celsius and Fahrenheit
