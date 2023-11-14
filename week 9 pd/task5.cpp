#include<iostream>
using namespace std;
int calculateCounts(string string1,string string2);
main()
{
    string string1, string2;
    cout<<"Enter the first string: ";
    getline(cin,string1);
    cout<<"Enter the second string: ";
    getline(cin,string2);
    int result=calculateCounts( string1, string2);
    cout<<"Number of common characters: "<<result;
}
int calculateCounts(string string1,string string2)
{
    int count=0;
    for(int i=0;string1[i]!='\0'; i++)
    {
          for(int j=0; string2[j]!='\0'; j++)
          {
             if(string1[i+count]==string2[j])
            {
                count ++;
            }
          }
    }
    return count;
}