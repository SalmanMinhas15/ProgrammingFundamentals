#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int countlines(string lines);
main()
{
    string lines;
    lines="task1.txt";
    int result=countlines(lines);
    cout<<"Total number of lines: "<<result;
}
int countlines(string lines)
{
    int count=0;
    fstream file;
    file.open("task1.txt",ios::in);
    while(!file.eof())
    {
        getline(file,lines);
        count++;
    }
    file.close();
    return count;
}