#include<iostream>
#include<iomanip>
using namespace std;
void cargostatus(float count);
main(){
    float count;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>count;
    cargostatus(count);
}
void cargostatus(float count){
    float a,minibus=0,truck=0,train=0,totaltons=0;
  for(int i=1;i<=count;i++)
  {   
    cout<<"Enter the tonnage of cargo "<<i<<": ";
    cin>>a;
    totaltons+=a;
    if(a<=3)
    {
        minibus+=a;
    }
    if(a>3 && a<=11)
    {
        truck+=a;
    }
    if(a>11)
    {
        train+=a;
    }
  }
  cout<<fixed<<setprecision(2)<<(minibus*200+truck*175+train*120)/totaltons<<endl;
  cout<<fixed<<setprecision(2)<<(minibus*100)/totaltons<<"%"<<endl;
  cout<<fixed<<setprecision(2)<<(truck*100)/totaltons<<"%"<<endl;
  cout<<fixed<<setprecision(2)<<(train*100)/totaltons<<"%"<<endl;
}