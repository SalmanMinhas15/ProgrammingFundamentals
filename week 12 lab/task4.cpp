#include<iostream>
using namespace std;
int printSum(int array[][3] , int rowsize);
main()
{
    int rowsize;
    cout<<"Enter row size: ";
    cin >> rowsize;
    int array[rowsize][3];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    int result=printSum(array,rowsize);
    cout<<"The sum of elements in the matrix is: "<<result;
}
int printSum(int array[][3] , int rowsize)
{
    int sum=0;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
           sum+=array[i][j];
        }
    }
    return sum;
}