#include<iostream>
using namespace std;
void result(int n);
main(){
	int n;
	cout<<"Enter your score: ";
	cin>>n;
	result(n);  }
void result(int n){
	if(n>50)
	cout<<"Pass";
	else
	cout<<"Fail";   
}
	