#include<iostream>
#include<cmath>
using namespace std;
main(){
	float base,height,angle;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>base;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>>angle;
	angle=angle/57.2958;
	cout<<"The height of the tree is: "<<tan(angle)*base<<" feet";
	return 0;
	}