#include<iostream>
using namespace std;
void largestColumn(int array[][5],int rowsize);
main()
{
    int rowsize;
    cout<<"Enter row size: ";
    cin >> rowsize;
    int array[rowsize][5];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    cout<<"\nOriginal Matrix:"<<endl;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    largestColumn(array,rowsize);
}
void largestColumn(int array[][5],int rowsize)
{
     int x, largestSum=0;    // to chk for which column the sum is greater
    cout<<"\nMatrix after largest column moved to first:"<<endl;
    for(int j=0;j<5;j++)   // column loop
    {
        int sum=0;
        for(int i=0;i<rowsize;i++)     // row loop
        {
            sum+=array[i][j];
        }
        if(sum>largestSum)
        {
            largestSum=sum;
            x=j;
        }
    }
    int temp;                            //  for swap the greater column to first column
   for(int j=0;j<5;j++)                  //column loop
    {
     for(int i=0;i<rowsize;i++)          //row loop
       {
         temp=array[i][0];
         array[i][0]=array[i][x];
         array[i][x]=temp;
       }
       break;
    }
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
}