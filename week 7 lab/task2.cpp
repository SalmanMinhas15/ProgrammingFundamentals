#include<iostream>
using namespace std;
void fibonacci(int l);
main(){
    int l;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>l;
    fibonacci(l);
}
void fibonacci(int l){
    int n1=0;
    int n2=1;
    int x;
    for(x=0;x<l;x++){
        int next;
        next=n1;
        if(x<l-1) {
            cout<<next<<", ";}
        else if(x<l){
            cout<<next;
        }
        
        next=next+n2;
        n1=n2;
        n2=next;
       
    }
}