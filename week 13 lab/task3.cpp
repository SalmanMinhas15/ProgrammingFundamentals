#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int calculateFreq(string filename);
main()
{
    string filename;
    filename="task1.txt";
    int result=calculateFreq(filename);
    cout<<"Total number of characters: "<<result;
}
int calculateFreq(string filename)
{
    int count=0;
    fstream file;
    file.open("task1.txt",ios::in);
    while(!file.eof())
    {
        getline(file,filename);
        {
            for(int i=0;i<filename.length();i++)
            {
                if(filename[i]=='s' || filename[i]=='S')
                {
                count++;
                }
            }
        }
    }
    return count;
}