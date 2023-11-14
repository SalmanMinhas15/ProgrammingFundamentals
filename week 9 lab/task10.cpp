#include<iostream>
using namespace std;
main()
{
    string inputArg;
    cout<<"Enter the argument 'a': ";
    getline(cin,inputArg);
    string result="something ";
    result+=inputArg;
    cout<<"Result: "<<result;
}