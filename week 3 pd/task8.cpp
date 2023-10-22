#include<iostream>
using namespace std;
main(){
	float vegetablep,fruitp,total;int vegkilo,fruitkilo;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetablep;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitp;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>vegkilo;
	cout<<"Enter total kilograms of fruits: ";
	cin>>fruitkilo;
	total=vegetablep/1.94*vegkilo+fruitp/1.94*fruitkilo;
	cout<<"Total earnings in Rupees (Rps): "<<total;
	}