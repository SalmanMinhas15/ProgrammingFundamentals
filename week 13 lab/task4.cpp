#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void studentDetail(string name[],int age[],float matricMarks[],float fscMarks[],float ecatMarks[],int size,int &count);
void saveToFile(string name[], int age[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName);
main()
{
    int count=0;
    int size=100;
    string name[size];
    int age[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    studentDetail( name, age, matricMarks, fscMarks,ecatMarks,size,count);
    // saveToFile( name, age, matricMarks,fscMarks, ecatMarks,  count,fileName);
}
void studentDetail(string name[],int age[],float matricMarks[],float fscMarks[],float ecatMarks[],int size,int &count)
{
    string option;
    do
    {
        cout<<"Enter student's name: ";
        getline(cin,name[count]);
        cout<<"Enter student's age: ";
        cin >> age[count];
        cout<<"Enter student's Matric marks: ";
        cin >> matricMarks[count];
        cout<<"Enter student's Fsc marks: ";
        cin >> fscMarks[count];
        cout<<"Enter student's Ecat marks: ";
        cin >> ecatMarks[count];
        cout<<"Enter No to Stop or Yes to Continue Enter: ";
        cin >> option;
        count++;
    }
    while(option=="Yes" || option=="yes");
}
void saveToFile(string name[], int age[], float matricMarks[],float fscMarks[], float ecatMarks[], int count, string fileName)
{
    
}