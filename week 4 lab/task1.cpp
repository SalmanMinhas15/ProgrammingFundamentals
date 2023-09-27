#include<iostream>
using namespace std;
void calculatefuel (float d);
main(){
	float d;
	cout<<"Enter the distance: ";
	cin>>d;
	calculatefuel( d);}
void calculatefuel (float d)
	{
	float f;
	f=10*d;
	cout<<"Fuel needed: "<<f;
	}
	