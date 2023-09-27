#include<iostream>
using namespace std;
void result(int n);
main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	result(n);     }
void result(int n){
	if(n%2==0)
	cout<<"Number "<<n<<" is even";
	else
	cout<<"Number "<<n<<" is odd";
	}