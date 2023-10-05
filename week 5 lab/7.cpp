#include<iostream>
using namespace std;
bool symmetryCheck(int n);
main(){
    int n;
    bool result;
    cout <<"Enter a three-digit number: ";
    cin >>n;
    result=symmetryCheck(n);
    if (result==1){
        cout<<"The number is symmetrical.";
    }
    if (result==0){
        cout<<"The number is not symmetrical.";
    }
}

bool symmetryCheck(int n){
    int n1, n2, n3, a;
    n1=n/100;
    a=n%100;
    n2=a/10;
    n3=n%10;

    if (n1==n3){
        return true;
    }
    if (n1!=n3){
        return false;
    }
}