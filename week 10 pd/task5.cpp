#include <iostream>
using namespace std;
void sorting(int array[]);
main(){
    cout<<"Enter the weights of the 10 packages:"<<endl;
    int array[10];
    for(int i=0; i<10; i++){
        cin >> array[i];
    }
    sorting(array);
}
void sorting(int array[])
{
    cout<<"Sorted array in ascending order: [";
    int temp=0;
    for(int i=0; i<10; i++)
    {
        for(int j=i;j<10-1;j++)
        {
        if(array[i]>array[j+1])
        {
            temp=array[i];
            array[i]=array[j+1];
            array[j+1]=temp;
        }
        }
    }
    for(int i=0;i<10;i++)
    {
        if(i==9)
        {
            cout<<array[i];
        }
        else
        {
            cout<<array[i]<<", ";
        }
    }
    cout<<"]";
}