#include<iostream>
using namespace std;
int Freqchk(int n,int digit);
main(){
    int n,digit,result;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    result=Freqchk(n,digit);
    cout<<"Frequency: "<<result;
    return 0;
}
int Freqchk(int n,int digit){
      int count=0;
    while(n>0){
       int num;
        num=n%10;
        if(digit==num){
            count++;
        }
       n/=10;
         }
    return count;
}