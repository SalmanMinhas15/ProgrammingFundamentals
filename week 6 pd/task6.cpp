#include<iostream>
#include<iomanip>
using namespace std;
int stays;
string hotelprice(string month,int stays);
main(){
    string month;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    string result=hotelprice(month,stays);
   
    if(result=="case1" && (stays<=7 )){
      cout<<"Apartment: "<<fixed<<setprecision(6)<<stays*65<<"$."<<endl;
      cout<<"Studio: "<<fixed<<setprecision(6)<<stays*50<<"$."<<endl;
   }
    if(result=="case1" && (stays>7 && stays<15 )){
      cout<<"Apartment: "<<fixed<<setprecision(6)<<stays*65<<"$."<<endl;
      cout<<"Studio: "<<fixed<<setprecision(6)<<stays*50-(stays*50*0.05)<<"$."<<endl;
   }
        if(result=="case1"  && stays>14){
        cout<<"Apartment: "<<fixed<<setprecision(6)<<(stays*65)-(stays*65*0.1)<<"$.";
          cout<<"Studio: "<<fixed<<setprecision(6)<<(stays*50)-(stays*50*0.3)<<"$."<<endl;
        }  
        if(result=="case2" && stays<15){
            cout<<"Apartment: "<<fixed<<setprecision(6)<<stays*68.70<<"$."<<endl;
            cout<<"Studio: "<<fixed<<setprecision(6)<<stays*75.20<<"$."<<endl;
        } 
        if(result=="case2" && stays>=15){
          cout<<"Apartment: "<<fixed<<setprecision(6)<<(stays*68.70)-(stays*68.70*0.1)<<"$."<<endl;
          cout<<"Studio: "<<fixed<<setprecision(6)<<(stays*75.20)-(stays*75.20*0.20)<<"$."<<endl;   
        }
        if(result=="case3" && stays<15){
         cout<<"Apartment: "<<fixed<<setprecision(6)<<stays*77<<"$."<<endl;
        cout<<"Studio: "<<fixed<<setprecision(6)<<stays*76<<"$."<<endl;   
        }
        if(result=="case3" && stays>14){
         cout<<"Apartment: "<<fixed<<setprecision(6)<<(stays*77)-(stays*77*0.1)<<"$."<<endl;
         cout<<"Studio: "<<fixed<<setprecision(6)<<stays*76<<"$."<<endl; 
        }

    }

string hotelprice(string month,float stays){
    if(month=="May" || month=="October"){
        return "case1";
    }
    else if(month=="June" || month=="September"){
        return "case2";
    }
    else if(month=="July" || month=="August"){
        return "case3";
    }
    return 0;
}