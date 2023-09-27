#include<iostream>
using namespace std;
void netamount(string day,int amount);
main(){
	int amount;
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	netamount(day,amount);           }
void netamount(string day,int amount){
	int total;
	if(day=="Sunday")
	cout<<"Payable Amount: $"<<amount-(10*amount/100);
	else
	cout<<"Payable Amount: $"<<amount;
	}
