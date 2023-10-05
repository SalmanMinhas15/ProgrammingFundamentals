#include<iostream>
#include<cmath>
using namespace std;
main(){
	float a,b,c,disc;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	disc=pow(b,2)-(4*a*c);
if(disc>0){
	
	cout<<"Solutions: x = "<<((-1*b)+sqrt(disc))/(2*a) <<" and x = "<< ((-1*b)-sqrt(disc))/(2*a) ; }  
if(disc==0){
	cout<<"Solution: x = "<<-b/(2*a);   }
if(disc<0){
	float root=(-1*b)/(2*a);
	float root1=sqrt(-1*disc)/(2*a);
	float root2=sqrt(-1*disc)/(2*a);
	cout<<"Complex Solutions: x = "<<root<<" + "<<root1<<"i and x = "<<root<<" - "<<root2<<"i";
	}
 }