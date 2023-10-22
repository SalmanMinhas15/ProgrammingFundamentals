#include<iostream>
using namespace std;
main(){
	int n,w,h,walls;
	cout<<"Number of square meters you can paint: ";
	cin>>n;
	cout<<"Width of the single wall (in meters): ";
	cin>>w;
	cout<<"Height of the single wall (in meters): ";
	cin>>h;
	walls=n/(w*h);
	cout<<"Number of walls you can paint: "<<walls;
	}