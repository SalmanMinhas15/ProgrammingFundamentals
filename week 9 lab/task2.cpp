#include<iostream>
using namespace std;
string reverse(string word);
main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    string result=reverse(word);
    cout<<"Reversed String:"<<result;
}
string reverse(string word)
{    int count=0;string result= "";
    for(int i=0;word[i]!='\0';i++)
    {
        count++;
    }
    for(word[count];count>=0;count--)
    {
        result+=word[count];
    }
    return result;
}