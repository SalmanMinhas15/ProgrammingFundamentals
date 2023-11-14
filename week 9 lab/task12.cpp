#include<iostream>
using namespace std;
bool isArrayspecial(int array[] , int size);
main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
    cout<<"Enter "<<size<<" elements of the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>> array[i];
    }
    bool result=isArrayspecial(array, size);
    if(result==1)
    {
        cout<<"The array is special";
    }
    if(result==0)
    {
        cout<<"The array is not special";
    }
}
bool isArrayspecial(int array[] , int size)
{
    int counteven=0,countodd=0,evenElements=(size/2),oddElements=size/2;
    if(size%2!=0)
    {
        evenElements=evenElements+1;
    }
    for(int j=1;j<size;j=j+2)
    {
        if((array[j]+1)%2==0)
        {
            countodd++;
        }
    
    }    
    for(int i=0;i<size;i=i+2)
    {
        if(array[i]%2==0)
        {
            counteven++;  }   
            }
    if(counteven==evenElements && countodd==oddElements)
    {
        return true;
    }
    else{
        return false;
    }
    }       
