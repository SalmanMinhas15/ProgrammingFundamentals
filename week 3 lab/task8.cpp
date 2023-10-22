#include<iostream>
using namespace std;
main(){
	cout<<"Enter voltage (in volts): ";
	int volt;
	cin>>volt;
	cout<<"Enter current (in amperes): ";
	float I;
	cin>>I;
	float p;
	p=I*volt;
	cout<<"The power is "<<p<<" watts.";
	}
	