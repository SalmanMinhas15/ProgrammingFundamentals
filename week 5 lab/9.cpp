#include<iostream>
using namespace std;
void TimeAfterTimeTravel(int hours, int min);
main(){
    int hours,min;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>min;
    TimeAfterTimeTravel(hours,min);
}

void TimeAfterTimeTravel(int hours, int min){
int totalmin, Finaltime,finalmin,finalhour;
totalmin=hours*60+min;
Finaltime=totalmin+15;
finalmin=Finaltime%60;
finalhour=Finaltime/60;
cout<<finalhour<<":"<<finalmin;


}