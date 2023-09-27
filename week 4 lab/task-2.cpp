#include<iostream>
using namespace std;
void result(float inch);
main(){
	float inch;
	cout<<"Enter the measurement in inches: ";
	cin>>inch;
	result(inch);     }
void result(float inch){
	float feet;
	feet=inch/12;
	cout<<"Equivalent in feet: "<<feet;
	}