#include<iostream>
using namespace std;
main(){
	string name;
	float weightloss,reqdays;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>weightloss;
	reqdays=15*weightloss;
	cout<<name<<" will need "<<reqdays<<" days to lose "<<weightloss<<" kg of weight by following the doctor's suggestions";
	}
