#include<iostream>
using namespace std;
void resultingArray(int array1[], int size1,int array2[],int size2);
main()
{
    int size1, size2;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>> size1;
    cout<<"Enter "<<size1<<" elements for the first array, one per line:"<<endl;
    int array1[size1];
    for(int i=0; i<size1 ; i++)
    {
        cin>> array1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>> size2;
    cout<<"Enter "<<size2<<" elements for the second array, one per line:"<<endl;
    int array2[size2];
    for(int j=0; j<size2; j++)
    {
        cin>>array2[j];
    }
    resultingArray( array1,  size1, array2, size2);
}
void resultingArray(int array1[], int size1,int array2[],int size2)
{
    int result;
    cout<<"Resulting array: ["<<array1[0]<<", ";
    for(int j=0;j<size2; j++)
    {
        cout<<array2[j]<<", ";
    }
    cout<<array1[1]<<"]";
}