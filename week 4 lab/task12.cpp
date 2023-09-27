#include<iostream>
using namespace std;
void name(string n);
main(){  
	string n;
	cout<<"Enter a Name: ";
	cin>>n;
	name(n); 
	 }
void name(string n)
{

	if(n=="Kaka")
	cout<<"Name: Kaka"<<endl;
	else
	cout<<"Again enter a Name: ";
	cin>>n;
	name(n);
	}