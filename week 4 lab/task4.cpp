#include<iostream>
using namespace std;
void add(int a,int b);
void subt(int a,int b);
void mult(int a,int b);
void division(int a,int b);
main(){
	int a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	char c;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>>c;
	if(c=='+')
	add(a,b);
	if(c=='-')
	subt(a,b);
	if(c=='*')
	mult(a,b);
	if(c=='/')
	div(a,b);           }
void add(int a,int b){
	int sum;
	sum=a+b;
	cout<<"Addition: "<<sum;   }
void mult(int a,int b){
	int mult;
	mult=a*b;
	cout<<"Multiplication: "<<mult;     }
void subt(int a,int b){
	int subt;
	subt=a-b;
	cout<<"Subtraction: "<<subt;    }
void division(int a,int b){
	float div;
	div=a/b;
	cout<<"Division: "<<div; }