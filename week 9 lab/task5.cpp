#include<iostream>
using namespace std;
bool isEntered(int array[],int size, int number);
main()
{
    int size,number;
    cout<<"Enter the number of elements: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers, one per line:"<<endl;
     int array[size];
     for(int i=0;i<size; i++)
     {
        cin >> array[i];
       if(isEntered(array,i,array[i]))
       {
        cout<<"Already Entered: "<<array[i]<<endl;
       }
     }
     cout<<"Unique numbers entered: ";
     for(int i=0; i<size; i++)
     {
        if(!isEntered(array,i,array[i]))
        {
            cout<<array[i]<<' ';
        }
     }
     
}
bool isEntered(int array[],int size, int number)  
{    
    for(int i=0;i<size;i++)
    {
        if(array[i]==number)
        {
            return true;
        }
    }
    return false;
}
