#include <iostream>
using namespace std;
int specialValues(int array[], int length);
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
    int result=specialValues( array, length);
    cout<<"Special value: "<<result;
}
int specialValues(int array[], int length)
{
    int reducelength=length;
    for(int i=0;i<length;i++)
    {
        if(array[i]==0)
        {
            reducelength--;
        }
    }
    int count=0;
    for(int i=0;i<length;i++)
    {
        if(array[i]>=reducelength)
        {
            count++;
        }
    }
    if(count==0)
    {
        count=-1;
    }
    int chkCount=0;  // chk that are all array elements are 0?
    for(int i=0;i<length;i++)
    {
        if(array[i]==0)
        {
            chkCount++;
        }
    }
    if(chkCount==length)
    {
        count=-1;
    }
    return count;
}