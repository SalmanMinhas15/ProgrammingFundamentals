#include<iostream>
#include<cmath>
using namespace std;
bool chknumber(int n);
main(){
    int n;
    bool result;
    cout<<"Enter Number: ";
    cin>>n;
    result=chknumber(n);
    if(result==1){
        cout<<"1";
    }
    if(result==0){
        cout<<"0";
    }
}
bool chknumber(int n){
    // int sqrnum=sqrt(n);
    for(int num=3;num<n;num++)
    {
        if(n%num==0 || n%2==0)
       {
         return false;
       }}
        return true;  }