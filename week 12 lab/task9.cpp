#include<iostream>
using namespace std;
int countIdntRows(int array[][3],int rowsize);
main(){
    int rowsize;
    cout<<"Enter the number of rows for the array: ";
    cin >> rowsize;
    int array[rowsize][3];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    int result=countIdntRows(array,rowsize);
    cout<<"The count of identical rows in the array is: "<<result;
}
int countIdntRows(int array[][3],int rowsize)
{ 
    int count=0;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(array[i][j]==array[i][j+1])
          {
            if(array[i][j+1]==array[i][j+2])
            {
                count++;
            }
          }
        }
    }
    return count;
}