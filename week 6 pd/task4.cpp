#include<iostream>
using namespace std;
float netamount;
float case1(float min);
float case2(float min);
float case3(float min);
main(){
    char sc,timeofcall;float min;
    float result1,result2,result3;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>sc;
    if(sc=='r' || sc=='R'){
        cout<<"Enter the number of minutes used: ";
        cin>>min;
        result1= case1(min);
        cout<<"Service Type: Regular"<<endl;
            cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
        cout<<"Amount Due: $"<<result1;
    }
    if(sc=='P' || sc=='p'){
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>timeofcall;
        if(timeofcall=='N' || timeofcall=='n'){
            cout<<"Enter the number of minutes used: ";
            cin>>min;
          result2=case2(min);
          cout<<"Service Type: Premium"<<endl;
            cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
          cout<<"Amount Due: $"<<result2;
        }
        if(timeofcall=='D' || timeofcall=='d'){
             cout<<"Enter the number of minutes used: ";
            cin>>min;
            result3=case3(min);
            cout<<"Service Type: Premium"<<endl;
            cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
            cout<<"Amount Due: $"<<result3;
        }
    }
    return 0.0;
}
float case1(float min){
    if(min<=50){
        netamount=10.00;
    }
    if(min>50){
        netamount=((min-50)*0.20)+10.00;
    }
    return netamount;
}
float case2(float min){
    if(min<=100){
        netamount=25.00;
    }
    else if(min>100){
        netamount=25.00+((min-100)*0.05);
    }
    return netamount;
}
float case3(float min){
    if(min<=75){
       netamount=25.00;
    }
    else if(min>75){
        netamount=25.00+((min-75)*0.10);}
    
    return netamount;
}