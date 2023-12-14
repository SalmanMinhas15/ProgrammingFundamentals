#include <iostream>
using namespace std;
bool chkArrangment(int array[], int length);
main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin >> length;
    cout<<"Enter the elements of the array:"<<endl;
    int array[length];
    for(int i=0;i<length;i++)
    {
        cin >> array[i];
    }
    bool result=chkArrangment(array, length);
    cout<<"Can be arranged: "<<result;
}
bool chkArrangment(int array[], int length)
{
    bool result=true;
    int temp=0;
    for(int i=0;i<length;i++)
    {
        for(int j=i;j<length-1;j++)
        {
            if(array[i]>array[j+1])
            {
                temp=array[i];
                array[i]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    int x=array[0];
    for(int i=0;i<length;i++)
    {
       if(array[i]==array[i+1])
       {
        result=false;
        break;
       }
        if(array[i]!=x)
        {
            result=false;
            break;
        }
        x++;
    }
    return result;
}