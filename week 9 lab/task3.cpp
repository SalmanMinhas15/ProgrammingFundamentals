#include<iostream>
#include<string.h>
using namespace std;
string shiftedstring(string word);
main()
{
    string word;
    cout<<"Enter a String: ";
    getline(cin,word);
    string result=shiftedstring(word);
    cout<<"Shifted String: "<<result;
}
string shiftedstring(string word)
{
     string result="";
    for(int i=0;word[i]!='\0';i++)
    {
        int Asci=word[i];
        if(word[i]!='z' && word[i!='Z'])
        {
        Asci++;  }
        if(word[i]==' ')
        {
            Asci=word[i];
        }
        if(word[i]=='Z')
        {
            Asci='A';
        }
        if(word[i]=='z')
        {
            Asci='a';
        }
        char nextchar=static_cast<char>(Asci);
        result+=nextchar;
    }
    return result;
}