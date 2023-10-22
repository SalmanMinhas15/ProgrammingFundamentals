#include<iostream>
using namespace std;
main(){
	string movie;
	float adultt,childt,adulttsold,childtsold,charity,donation,totalsale,rem;
	cout<<"Enter the movie name: ";
	cin>>movie;
	cout<<"Enter the adult ticket price: $";
	cin>>adultt;
	cout<<"Enter the child ticket price: $";
	cin>>childt;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adulttsold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>childtsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	cout<<"   "<<endl;
	cout<<"Movie: "<<movie<<endl;
	totalsale=(adultt*adulttsold)+(childt*childtsold);
	cout<<"Total amount generated from ticket sales: $"<<totalsale<<endl;
	donation=totalsale*10;
	donation=donation/100;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	rem=totalsale-donation;
	cout<<"Remaining amount after donation: $"<<rem;
	}
