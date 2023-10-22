#include<iostream>
using namespace std;
void survivestatus(int money,int year);
main(){
    int money,year;
    cout<<"Enter Money: ";
    cin>>money;
    cout<<"Enter Year: ";
    cin>>year;
    survivestatus(money,year);
    }
void survivestatus(int money,int year){
    for(int i=1800;i<=year;i++)
    {   if(i%2==0)
        {
        money=money-12000;  }
        else
    {
        money-=12000+(50 *(18+i-1800));
    }
    }
    
    if(money>0)
    {
        cout <<"Yes! He will live a carefree life and will have "<<money<<" dollars left.";
    }
    else{
        cout<< "He will need "<< abs(money)<<" dollars to survive.";
    }
}