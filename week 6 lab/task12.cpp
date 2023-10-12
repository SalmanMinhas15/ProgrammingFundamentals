#include<iostream>
using namespace std;
float total(int r,int c,string screen);
main(){
     int r,c;float result;
     string screen;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screen;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    result=total(r,c,screen);
    cout<<result;
}
float total(int r,int c,string screen){
    if(screen=="Premiere"){
        return 12*r*c;
    }
    if(screen=="Normal"){
        return 7.50*c*r;
    }
    if(screen=="Discount"){
        return 5*r*c;
    }
}