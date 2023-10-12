#include<iostream>
using namespace std;
int findGreatest(float n1,float n2,float n3);
main(){
    float n1,n2,n3,result;
    cout<<"Enter the first number: ";
    cin>>n1;
     cout<<"Enter the second number: ";
    cin>>n2;
     cout<<"Enter the third number: ";
    cin>>n3;
    findGreatest(n1,n2,n3);
    cout<<"The greatest number among "<<n1<<", "<<n2<<", and "<<n3<<" is: "<<result;
    
}
int findGreatest(float n1,float n2,float n3){
    if(n1>n2 && n1>n3){
    return n1;
    }
    if(n2>n3 && n2>n1){
         return n2;  
    }
    else{
           return n3;
    }
}