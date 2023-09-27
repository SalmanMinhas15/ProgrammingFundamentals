#include<iostream>
using namespace std;
void fuel(int d);
main(){
	int d;
	cout<<"Enter the distance: ";
	cin>>d;
	fuel(d);  }
void fuel(int d){
	if(d>=10)
	cout<<"Fuel needed: "<<d*10;
	else
	cout<<"Fuel needed: "<<100 ; 
	}