#include<iostream>
using namespace std;
int sum(int n);
main(){
    int n,result;
    cout<<"Enter a number: ";
    cin>>n;
    result=sum(n);
    cout<<"Sum of digits: "<<result;
}
int sum(int n){
    int sum=0; int num;
    while(n>0){
        num=n%10;
        sum=sum+num;
          n=n/10;
    }
  
    return sum;
}