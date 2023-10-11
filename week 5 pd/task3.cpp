#include<iostream>
using namespace std;
float finalPrice(char type,float price);
main(){
    char type ;float price,result;
    cout<<"Enter vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    result=finalPrice(type,price);
    cout<<"The final price of the vehicle of type "<<type<<" after the tax is $"<<result;
}
float finalPrice(char type,float price){
    if(type=='M'){
        float priceafterTax=price*0.06+price;
        return priceafterTax;
    }
    if(type=='E'){
        float priceafterTax=price*0.08+price;
        return priceafterTax;
    }
    if(type=='S'){
        float priceafterTax=price*0.1+price;
        return priceafterTax;
    }
    if(type=='V'){
    float priceafterTax=price*0.12+price;
        return priceafterTax;}
    if(type=='T'){
    float priceafterTax=price*0.15+price;
        return priceafterTax;}    
    return 0;
}