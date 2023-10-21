#include<iostream>
using namespace std;
string recomendation(string temp,string humidity);
main(){
    string temp,humidity,result;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    result=recomendation(temp,humidity);
    cout<<"Recommended activity: "<<result;
    
}
string recomendation(string temp,string humidity){
    if(temp=="warm" && humidity=="dry"){
        return "Play tennis";
    }
    if(temp=="warm" && humidity=="humid"){
        return "Swim";
    }
    if(temp=="cold" && humidity=="dry"){
        return "Play basketball";
    }
    if(temp=="cold" && humidity=="humid"){
        return "Watch TV";}
   return 0;
}