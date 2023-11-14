#include<iostream>
#include<string.h>
using namespace std;
string chkSevens(int numbers[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin >> numbers[i];
    }
    string result=chkSevens(numbers, size);
    cout<<result;
}
string chkSevens(int numbers[], int size)
{
    for(int i=0; i<size; i++)
    {
        string stringnumber=to_string(numbers[i]);
             int length=stringnumber.length();
             for(int j=0; j<length; j++)
             {
              if(stringnumber[j]=='7')
              {
               return "Boom!";
                break;
                }
            else
            {
                continue;
            }    
             }
        }
         return "there is no 7 in the array";
    }