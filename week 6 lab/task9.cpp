#include<iostream>
using namespace std;
string chktitle(char gender,int age);
main(){
    char gender;int age;
    string result;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    result=chktitle(gender,age);
    cout<<result;
}
string chktitle(char gender,int age){
    if(gender=='m' && age>=16){
        return "Your personal title is: Mr.";
    }
    if(gender=='m' && age<16){
        return "Your personal title is: Master";
    }
    if(gender=='f' && age>=16){
        return "Your personal title is: Ms.";
    }
    if(gender=='f' && age<16){
        return "Your personal title is: Miss";
    }
}