#include<iostream>
using namespace std;
int totaldigits(int n);
main(){
    int n,result;
    cout<<"Enter a number: ";
    cin>>n;
    result=totaldigits(n);
    if(n<0){
    n=n*-1;
   }
    cout<<"Total number of digits: "<<result;
}
int totaldigits(int n){
   int count=0;
   
   while(n>0){
    n=n/10;
    count++;
   }
   return count;
}
  