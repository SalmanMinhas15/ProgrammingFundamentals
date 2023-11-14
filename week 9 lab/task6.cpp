#include<iostream>
using namespace std;
int largestNum(int array[],int elements);
main()
{
    int elements;
    cout<<"Enter the number of elements: ";
    cin>>elements;
    cout<<"Enter "<<elements<<" numbers, one per line:"<<endl;
    int array[elements];
    for(int i=0;i<elements;i++)
    {
        cin>>array[i];
    }
    int result=largestNum(array, elements);
    cout<<"The largest number entered is: "<<result;

}
int largestNum(int array[],int elements)
{
    int largestNum=array[0];
    for(int i=1;i<elements;i++)
    {
    if(array[i]>largestNum)
    {
        largestNum=array[i];
    }
    }
    return largestNum;
}