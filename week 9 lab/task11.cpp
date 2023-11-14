#include<iostream>
using namespace std;
string removeVowels(string inputString);
main()
{
    string inputString;
    cout<<"Enter a string: ";
    getline(cin,inputString);
    string result=removeVowels(inputString);
    cout<<"String with vowels removed: "<<result;
}
string removeVowels(string inputString)
{
    string result="";
    for(int i=0;inputString[i]!='\0';i++)
    {
        if(inputString[i]=='a' ||inputString[i]== 'e' ||inputString[i]== 'i' ||inputString[i]== 'o' ||inputString[i]== 'u' ||inputString[i]== 'A' ||inputString[i]== 'E' || inputString[i]=='I' ||inputString[i]== 'O' ||inputString[i]== 'U')
        {
            continue;
        }
        else
        {
            result=result+inputString[i];
        }
    }
    return result;
}