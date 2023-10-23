#include<iostream>
using namespace std;
void dots(int n);
main(){
    int n;
    cout<<"Enter number of Triangle: ";
    cin>>n;
    dots(n);
}
void dots(int n){
    int num,a;
    for(num=1;num<=n;num++){
         a=(num*(num+1))/2;
    }
    cout<<"Dots in the Triangle: "<<a;
}