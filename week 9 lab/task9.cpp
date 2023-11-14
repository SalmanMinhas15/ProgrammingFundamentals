#include<iostream>
using namespace std;
bool billresult(double change[], double totaldue);
main()
{
    double quarters,dimes,nickels,pennies,totaldue;
    cout<<"Enter quarters: ";
    cin>> quarters;
    cout<<"Enter dimes: ";
    cin>> dimes;
    cout<<"Enter nickels: ";
    cin>> nickels;
    cout<<"Enter pennies: ";
    cin>> pennies;
    cout<<"Enter the total amount due: $";
    cin>>totaldue;
    double change[4]={quarters,dimes,nickels,pennies};
    bool result=billresult(change,totaldue);
    if (result==1)
    {
        cout<<"Can you pay the amount? Yes";
    }
    if(result==0)
    {
       cout<<"Can you pay the amount? No"; 
    }
}
bool billresult(double change[], double totaldue)
{
    double total=(change[0]/4)+(change[1]/10)+(change[2]/20)+(change[3]/100);
    if(total>=totaldue)
    {
        return true;
    }
    else 
    {
       return false;
    }
    
}