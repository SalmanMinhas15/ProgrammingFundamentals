#include<iostream>
using namespace std;
float lowestPrice(float k,string period);
main(){
    float k,result;string period;
    cout<<"Enter the number of kilometers: ";
    cin>>k;
    cout<<"Enter the period of the day (day/night): ";
    cin>>period;
    result=lowestPrice(k,period);
    cout<<"Lowest price for "<<k<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(float k,string period){

    if(k>100){
        return 0.06*k;
    }
    else if(k>20){
        return 0.09*k;
    }
    if(k<20 && period=="day"){
        return 0.70+(0.79*k);
    }
    if(k<20 && period=="night"){
        return 0.70+(0.90*k);
    }
}