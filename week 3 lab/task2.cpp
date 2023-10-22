#include<iostream>
using namespace std;
main(){
	cout<<"Enter weight in pounds:";
	float lbs, kgs;
	cin>>lbs;
	kgs=lbs/2.22222;
	cout<< lbs <<" pounds is equal to " << kgs <<" kilograms.";
}