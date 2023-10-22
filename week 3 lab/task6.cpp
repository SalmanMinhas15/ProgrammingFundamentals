#include<iostream>
using namespace std;
main(){
	cout<<"Enter the size in megabytes (MB): ";
	int mb;
	cin>>mb;
	float bit, byte, kilobyte;
	kilobyte=mb*1024;
	byte=kilobyte*1024;
	bit=byte*8;
	cout<<mb<<" MB is equivalent to "<<bit<<" bits.";
	}