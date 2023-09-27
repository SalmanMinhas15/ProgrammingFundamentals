#include<iostream>
using namespace std;
void netamount(string day,int amount);
main(){
	string day;int amount;
	while(true){
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	netamount(day,amount); }  }
void netamount(string day,int amount)
{
	if(day=="Sunday")
	cout<<"Payable Amount: $"<<amount-(amount*10/100)<<endl;
	else
	cout<<"Payable Amount: $"<<amount-(amount*5/100)<<endl;
	
	}