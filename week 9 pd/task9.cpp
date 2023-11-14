#include<iostream>
using namespace std;
string longestWord(string array[], int count);
main()
{
    int count;
    cout<<"Enter the number of words: ";
    cin >> count;
    cout<<"Enter the words, one by one:"<<endl;
    string array[count];
    for(int i=0; i<count; i++)
    {
        cin >> array[i];
    }
    string result=longestWord(array,count);
    cout<<"Longest 7-segment word: "<<result;
}
string longestWord(string array[], int count)
{
    string result="";
    bool chkCharacters=true;
    for(int i=0; i<count; i++)
    {
        chkCharacters=true;
        for(int j=0;j<array[i].length(); j++)
        {
            if(array[i].length()<7 || array[i][j]=='k' || array[i][j]=='m' || array[i][j]=='v' || array[i][j]=='w' || array[i][j]=='x')
            {
                chkCharacters=false;
                break;
            }
        }
        if(chkCharacters)
        {
            result+=array[i];
        }
    }
        return result;
}