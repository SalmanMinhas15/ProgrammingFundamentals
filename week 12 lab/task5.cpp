#include<iostream>
using namespace std;
bool isMatrixIdentity(int array[][3]);
main()
{
    cout<<"Enter the elements of the matrix:"<<endl;
    int array[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    cout<<"The matrix you entered is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    bool result=isMatrixIdentity(array);
    if(result)
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else if(!result)
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}
bool isMatrixIdentity(int array[][3])
{
    int count1=0, count0=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
              if(array[i][j]==1)
              {
                count1++;
              }
            }
            if(i!=j)
            {
                if(array[i][j]==0)
                {
                    count0++;
                }
            }
        }
    }
    if(count1==3 && count0==6)
    {
        return true;
    }
    else 
    return false;
}