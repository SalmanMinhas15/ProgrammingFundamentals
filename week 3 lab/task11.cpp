#include<iostream>
using namespace std;
main(){
	cout<<"Enter the current world population: ";
	int cp, mbr ,population;
	cin>>cp;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>mbr;
	population=cp+(360*mbr);
	cout<<"The population in three decades will be: "<<population;
	}