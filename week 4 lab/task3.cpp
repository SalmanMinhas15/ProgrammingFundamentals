#include<iostream>
using namespace std;
void result(int n);
main(){
	int n;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>n;
	result(n);   }
void result(int n){
	int sticker;
	sticker=n*n*6;
	cout<<"Number of stickers needed: "<<sticker;
	}