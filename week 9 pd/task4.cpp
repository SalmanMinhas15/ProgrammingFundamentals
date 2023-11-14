#include<iostream>
using namespace std;
void evenOddtranform(int array[], int size,int n);
main()
{
    int size,n;
    cout<<"Enter the size of Array: ";
    cin >> size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin >> array[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    evenOddtranform( array, size, n);
}
void evenOddtranform(int array[], int size,int n)
{
    cout<<"[";
    for(int i=0; i<size; i++)
    {
        int number=array[i];
        if(i+1==size && array[i]%2==0)
        {
          number-=2*n;
          cout<<number<<"]";  
        }
        else if(i+1==size && array[i]%2!=0)
        {
           number+=2*n;
            cout<<number<<"]"; 
        }
        else if(array[i]%2==0)
        {
          number-=2*n;
          cout<<number<<", ";
        }
        else if(array[i]%2!=0)
        {
            number+=2*n;
            cout<<number<<", ";
        }

    }
}