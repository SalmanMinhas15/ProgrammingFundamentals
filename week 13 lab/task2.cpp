#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int countChars(string lines);
main()
{
    string lines;
    lines="task1.txt";
    int result=countChars(lines);
    cout<<"Total number of characters: "<<result;
}
int countChars(string lines)
{
    int count=0;
    fstream file;
    file.open("task1.txt",ios::in);
    while(!file.eof())
    {
        getline(file,lines);
        {
            for(int i=0;i<lines.length();i++)
            {
                count++;
            }
        }
    }
    return count;
}