#include<iostream>
using namespace std;
void reversenumbers(int n);
main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers, one per line:"<<endl;
    reversenumbers(n);
}
void reversenumbers(int n)
{
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Numbers in reverse order: ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
}