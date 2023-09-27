#include<iostream>
using namespace std;
void name(string n);
main(){  
	do
	{string n;
	cout<<"Enter Name: ";
	cin>>n;
	name(n); 
	  }
	while(true);  }
void name(string n)
	{
	cout<<"Name: "<<n<<endl;
	}
	