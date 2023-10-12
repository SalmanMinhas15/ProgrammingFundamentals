#include<iostream>
using namespace std;
float payable(string day,string month,float amount);
main(){
    string day,month;
    float amount,result;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    result=payable(day,month,amount);
    cout<<"Payable Amount after discount: "<<result;
}
float payable(string day,string month,float amount){
    float payable=amount;
    if(day=="Sunday" || month=="October"){
        payable=amount-(amount*0.1);
    }
    return payable;
}