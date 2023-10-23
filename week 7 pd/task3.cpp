#include<iostream>
using namespace std;
void amplification(int n);
main(){
    int n;
    cout<<"Enter the number to Amplify: ";
    cin>>n;
    amplification(n);
}
void amplification(int n){
    for(int num=1;num<=n;num++)
    {  
        if(num==n && num%4==0){
            cout<<num*10;
        }
        else if(num==n && num%4!=0){
            cout<<num;
        }
        else if(num%4==0){
            
            cout<<num*10<<", ";
        } 
         else if(num%4!=0){
            cout<<num<<", ";
        }
        
        
    }
}