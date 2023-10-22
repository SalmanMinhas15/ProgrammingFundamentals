#include<iostream>
using namespace std;
main(){
	cout<<"Enter the name of the cricket team: ";
	string name;
	cin>>name;
	int w, d, l, p;
	cout<<"Enter the number of wins: ";
	cin>>w;
	cout<<"Enter the number of draws: ";
	cin>>d;
	cout<<"Enter the number of losses: ";
	cin>>l;
	p=(w*3)+(d*1)+(l*0);
	cout<<name<<" has obtained "<<p<<" points in the Asia Cup tournament.";
	}