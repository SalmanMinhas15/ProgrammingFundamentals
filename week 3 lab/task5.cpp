#include<iostream>
using namespace std;
main(){
	cout<<"Enter the student's name: ";
	string name;
	cin>>name;
	cout<<"Enter matriculation marks (out of 1100): ";
	float marks;
	cin>>marks;
	cout<<"Enter intermediate marks (out of 550): ";
	float intermarks;
	cin>>intermarks;
	cout<<"Enter Ecat marks (out of 400): ";
	float ecatmarks;
	cin>>ecatmarks;
	float agg;
	agg=(50*ecatmarks/400+10*marks/1100+40*intermarks/550);
	cout<<"Aggregate score for "<<name<< " in UET is: "<<agg<<"%";
	   }