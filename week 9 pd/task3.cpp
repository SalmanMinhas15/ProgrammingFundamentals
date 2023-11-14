#include<iostream>
using namespace std;
bool chkSlot(string array[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin >> size;
    string array[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin >> array[i];
    }
    bool result=chkSlot( array,  size);
    cout<<result;
}
bool chkSlot(string array[], int size)
{   int count=1;
    for(int i=1; i<=size; i++)
    {
        if(array[i]==array[i-1])
        {
           count++;
        }
    }
    if(count==size)
        {
            return true;
        }
        else
        {
            return false;
        }
}