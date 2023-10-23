#include<iostream>
using namespace std;
void printaestricks(int totalrows);
main(){
    int totalrows;
    cout<<"Enter desired number of rows: ";
    cin>>totalrows;
    printaestricks(totalrows);
}
void printaestricks(int totalrows){
     for(int row=1;row<=totalrows;row++)
     {
        for(int col=totalrows; col>=row; col--)
        {
            cout<<"*";
        }
        cout<<endl;
     }
}