#include <iostream>
using namespace std;
string reverseString(string inputString);
main(){
    string inputString;
    cout<<"Enter a string: ";
    getline(cin, inputString);
    string result=reverseString(inputString);
    cout<<"Reversed string: "<<result;
}
string reverseString(string inputString){
    int length=inputString.length();
    string result="";
    for(int i=length-1;i>=0; i--)
    {
        if(inputString[i]==' ')
        {
          for(int j=i+1;j<length && inputString[j]!=' '; j++)
          {
            result=result+inputString[j];
          }    
          result+=" ";
        }
        else if(i==0)
        {
            for(int j=i; j<length && inputString[j]!=' '; j++)
            {
                result=result+inputString[j];
            }
        }
    }
    return result;
}