#include<iostream>
using namespace std;
void chkstatus(int age,int priceofmachine,int priceoftoy);
main(){
    int age,priceofmachine,priceoftoy;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>priceofmachine;
    cout<<"Enter the unit price of each toy: ";
    cin>>priceoftoy;
    chkstatus(age,priceofmachine,priceoftoy);
}
void chkstatus(int age,int priceofmachine,int priceoftoy){
    int recievemoney=10;
    int saving=0;
    for(int i=2;i<=age;i+=2)
    {
      saving=saving+recievemoney;
      recievemoney+=10;
        saving-=1;  
    }
    int totaltoys=(age+1)/2;
    
       totaltoys*=priceoftoy;
       saving+=totaltoys;
       if(saving>priceofmachine){
        cout<<"Yes!"<<endl;
        cout<<saving-priceofmachine;
       }
       if(saving<priceofmachine){
        cout<<"No!"<<endl;
        cout<<priceofmachine-saving;
       }
    
}