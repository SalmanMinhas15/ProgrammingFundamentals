#include<iostream>
using namespace std;
void primorial(int inputN);
main(){
    int inputN;
    cout<<"Enter the number to calculate Primorial: ";
    cin>>inputN;
    primorial(inputN);
}
void primorial(int inputN){
    int count=0;int next=1;
    for(int i=1;i<=count;count++)
    {    int n=3;
        for(int a=2;a<n;a++)
        {
        
        while(count==inputN)
        {
        if(n%a==0)
           next*=n;
          count++;
        }
        n++;
        }
    }
}
