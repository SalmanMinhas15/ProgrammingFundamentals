#include<iostream>
using namespace std;
void table(int n);
main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	table(n);     }
void table(int n){
          int i;
	for(i=1;i<=10;i++){
	cout<<n<<" x "<<i<<" = "<<n*i<<endl;   }  }