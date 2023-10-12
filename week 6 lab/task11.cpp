#include<iostream>
using namespace std;
string speedchk(float speed);
main(){
    float speed;
    string result;
    cout<<"Enter the speed: ";
    cin>>speed;
    result=speedchk(speed);
    cout<<result;
}
string speedchk(float speed){
    if(speed<=10){
     return "Slow";
    }
    else if(speed>10 && speed<=50){
        return "average";
    }
    else if(speed>50 && speed<=150){
        return "fast";
    }
    else if(speed>150 && speed<=1000){
        return "ultra-fast";
    }
    else if(speed>1000){
        return "extremely fast";
    }
    return 0;
}