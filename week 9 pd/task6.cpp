#include<iostream>
using namespace std;
int totaltime(string colors[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin >> size;
    string colors[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<< i+1 <<": ";
        cin >> colors[i];
    }
    int result=totaltime(colors,size);
    cout<<"Time to color: "<< result <<" seconds";
}
int totaltime(string colors[], int size)
{
    int coloringtime=2;
    for(int i=1; i<size; i++)
    {
        coloringtime+=2;
        if(colors[i]!=colors[i-1])
        {
            coloringtime+=1;
        }
    }
    return coloringtime;
}