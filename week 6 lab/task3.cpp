#include<iostream>
using namespace std;
void perimeter(char c,float n);
main(){
    char c;float n;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>c;
    cout<<"Enter the value: ";
    cin>>n;
    perimeter(c,n);
}
void perimeter(char c,float n){

    if(c=='s'){
        cout<<"The perimeter is: "<<4*n;
    }
    if(c=='c'){
        cout<<"The perimeter is: "<<6.28*n;
    }
    if(c=='t'){
        cout<<"The perimeter is: "<<3*n;
    }
    if(c=='h'){
        cout<<"The perimeter is: "<<6*n;
    }
  
}