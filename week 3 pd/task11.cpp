#include<iostream>
using namespace std;
main(){
	int a,n,live;
	cout<<"Enter the person's age: ";
	cin>>a;
	cout<<"Enter the number of times they've moved: ";
	cin>>n;
	live=a/(n+1);
	cout<<"Average number of years lived in the same house: "<<live;
	}