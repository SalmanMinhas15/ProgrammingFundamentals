#include<iostream>
using namespace std;
bool isLengthEven(string inputString);
main()
{
    string inputString;
    cout<<"Enter a String: ";
    cin>>inputString;
    bool result=isLengthEven(inputString);
    if(result==1)
    {
        cout<<"1";
    }
    if(result==0)
    {
        cout<<"0";
    }
}
bool isLengthEven(string inputString)
{
    int length=inputString.length();
     if(length%2==0)
     {
        return true;
     }
     else{
        return false;
     }
}