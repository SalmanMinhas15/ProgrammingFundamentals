#include<iostream>
using namespace std;
string fire(string array[5][5], string coordinate);
main()
{
    string coordinate;
    cout<<"Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coordinate;
    string array[5][5]={
        {".",".",".","*","*"},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".",".","*","*","."}};
    string result=fire( array,coordinate);
    cout<<"Result: "<<result;
}
string fire(string array[5][5], string coordinate)
{
    string coordinates[5][5]={
        {"A1","A2","A3","A4","A5"},
        {"B1","B2","B3","B4","B5"},
        {"C1","C2","C3","C4","C5"},
        {"D1","D2","D3","D4","D5"},
        {"E1","E2","E3","E4","E5"},
    };
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(coordinates[i][j]==coordinate)
            {
                x=i;
                y=j;
                break;
              }
        }
    }
    if(array[x][y]=="*")
    {
        return "BOOM";
    }
    else if(array[x][y]==".")
    {
        return "splash";
    }
}