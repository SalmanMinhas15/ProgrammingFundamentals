#include<iostream>
using namespace std;
main(){
	int n,a,b,c,d,sum;
	int x,y,z;
	cout<<"Enter a 4-digit number: ";
	cin>>n;
	a=n%10;
	x=n/10;
	b=x%10;
	y=x/10;
	c=y%10;
	z=y/10;
	sum=a+b+c+z;
	cout<<"Sum of the individual digits: "<<sum;
	}
	
	