#include<iostream>
using namespace std;
void check(int _5digitnum);
main(){
int _5digitnum;
cout <<"Enter a five-digit number: ";
cin >>_5digitnum;
check(_5digitnum);
}
void check(int _5digitnum)
{
    int a,b,c,d,e,sum;                             
    e=_5digitnum%10;
    a=_5digitnum/10000;
    b=(_5digitnum/1000)%10;
    c=(_5digitnum/100)%10;
    d=(_5digitnum%100)/10;
    sum=a+b+c+d+e;
    if (sum%2==1){
        cout<< "Oddish";
    }
    if (sum%2==0){
        cout <<"Evenish";
    }
}