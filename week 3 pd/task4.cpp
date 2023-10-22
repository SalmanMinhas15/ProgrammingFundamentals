#include<iostream>
using namespace std;
main(){
	  int impcount,playercount;
	float chance;
	cout<<"Enter Imposter Count: ";
	cin>>impcount;
	cout<<"Enter Player Count: ";
	cin>>playercount;
	chance=100*impcount/playercount;
	cout<<"Chance of being an imposter: "<<chance<<"%";
	}