#include<iostream>
using namespace std;
main(){
	int min ,sec, frame;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>sec;
	frame=min*60*sec;
	cout<<"Total Number of Frames: "<<frame;
	}