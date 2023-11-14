#include<iostream>
using namespace std;
string brokenkeys(string correctphrase,string ActuallyTyped);
main()
{
    string correctphrase, ActuallyTyped;
    cout<<"Enter the correct phrase: ";
    getline(cin, correctphrase) ;
    cout<<"Enter what you actually typed: ";
    getline(cin,ActuallyTyped);
    string result=brokenkeys( correctphrase, ActuallyTyped);
    cout<<"Broken keys: "<<result;
}
string brokenkeys(string correctphrase,string ActuallyTyped)
{
    string brokenkeys="";
    bool repeating;
    for(int i=0; i<correctphrase.length(); i++)
    {
            if(correctphrase[i]!=ActuallyTyped[i])
            {
                repeating=false;
                for(int j=0; j<brokenkeys.length(); j++)
                {
                    if(brokenkeys[j]==correctphrase[i])
                    {
                        repeating=true;
                        break;
                    }
                }
                if(!repeating)
                {
                brokenkeys+=correctphrase[i];
                }
                
            }   
    }
         return brokenkeys;
}