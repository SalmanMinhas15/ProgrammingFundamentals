#include<iostream>
using namespace std;
bool chk(int n1,int n2,int n3);
main(){
    int n1,n2,n3;
    bool result;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    result=chk(n1,n2,n3);
    if(result==1){
        cout<<"1";
    }
    if(result==0){
        cout<<"0";
    }
    
}
bool chk(int n1,int n2,int n3){
   if(n1==n2 && n2==n3 && n1==n3 ){
    return true;
   }
   if(n1!=n2 || n2!=n3 || n1!=n3){
    return false;
   }

}