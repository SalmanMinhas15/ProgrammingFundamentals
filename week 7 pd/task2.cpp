#include<iostream>
using namespace std;
void printaestricksupper(int totalrows);
void printaestrickslower(int totalrows);
main(){
    int totalrows;
    cout<<"Enter desired number of rows: ";
    cin>>totalrows;
    
    printaestricksupper(totalrows);
    printaestrickslower(totalrows);

}
void printaestricksupper(int totalrows)
{
    for(int row=1;row<=(totalrows/2)-1;row++)
    {
        for(int col=(totalrows/2)-1;col>=row;col--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printaestrickslower(int totalrows){
    for(int row=1;row<=(totalrows/2)-1;row++)
    {
        for(int col=1;col<=row;col++){
            cout<<" ";
        }
        for(int col=(totalrows/2)-1;col>=row;col--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
