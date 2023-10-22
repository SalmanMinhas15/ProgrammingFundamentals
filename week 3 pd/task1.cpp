#include<iostream>
using namespace std;
main(){
	int n;
	float intangles;
	cout<<"Enter the number of sides of the polygon: ";
	cin>>n;
	intangles=(n-2)*180;
	cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<intangles<<" degrees";
	}