#include<iostream> 
using namespace std;
void hcf(int n1,int n2);
void lcm(int n1,int n2);
main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    hcf(n1,n2);
    lcm(n1,n2);
}
void hcf(int n1,int n2){
    int gcd;
    for(int i=1;i<=n2;i++){
         if(n1%i==0 && n2%i==0)
        {
             gcd=i;
        } 
    }
    cout<<"GCD: "<<gcd<<endl;
}
void lcm(int n1,int n2){
    int gcd;
    for(int i=1;i<=n1;i++){
         if(n1%i==0 && n2%i==0)
        {
             gcd=i;
        } 
    }
    int lcm=(n1*n2)/gcd;
    cout<<"LCM: "<<lcm;
}