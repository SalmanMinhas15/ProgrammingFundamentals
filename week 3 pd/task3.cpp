#include<iostream>
using namespace std;
main(){
	 float initvelocity,acc,t,finalv;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>initvelocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acc;
	cout<<"Enter Time (s): ";
	cin>>t;
	finalv=initvelocity+(acc*t);
	cout<<"Final Velocity (m/s): "<<finalv;
	}
