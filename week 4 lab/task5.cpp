#include<iostream>
using namespace std;
void age(int a);
main(){
	int a;
	cout<<"Enter your age: ";
	cin>>a;
	age(a);  }
void age(int a){
	if(a>=18)
	cout<<"You are eligible to vote.";
	else
	cout<<"You are not eligible to vote.";       }