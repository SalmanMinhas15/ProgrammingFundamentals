#include<iostream>
using namespace std;
bool projectdetail(int needhours,int needdays,int workers);
main(){
    int needhours,needdays,workers,result;
    cout<<"Enter the needed hours: ";
    cin>>needhours;
    cout<<"Enter the days that the firm has:";
    cin>>needdays;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    result=projectdetail(needhours,needdays,workers);

}
bool projectdetail(int needhours,int needdays,int workers)
{
    
    int workhours=workers*needdays*10;
    workhours=workhours-(workhours*10/100);
    if(needhours>workhours){
     int case1hours=needhours-workhours;
    cout<<"Not enough time! "<<case1hours<<" hours needed";
    }
    if(needhours<workhours){
        int case2hours=workhours-needhours;
        cout<<"Yes! "<<case2hours<<" hours left";
    }
    return 0;
}