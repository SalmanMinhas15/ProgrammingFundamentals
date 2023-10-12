#include<iostream>
using namespace std;
float payable(string day,string month,float amount);
main(){
float amount;double result;
string day,month;
cout<<"Enter Purchase Day: ";
cin>>day;
cout<<"Enter Purchase Month: ";
cin>>month;
cout<<"Enter Purchase Amount: ";
cin>>amount;
result=payable(day,month,amount);
cout<<"Payable Amount after discount: "<<result;
  return 0.0;
}
float payable(string day,string month,float amount){
      float payable=amount;
    if(month=="October" && day=="Sunday"){
        payable=amount - (amount*0.1);
    }
    else if(day=="Sunday"){
        payable=amount-(amount*0.05);
    }
    return payable;
}