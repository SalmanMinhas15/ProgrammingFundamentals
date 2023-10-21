#include<iostream>
using namespace std;
string chkstatus(int examh,int examm,int studenth,int studentm);
main(){
    int examh,examm,studenth,studentm;string result;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examh;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examm;
    cout<<"Enter Student hour of arrival: ";
    cin>>studenth;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentm;
    result= chkstatus(examh,examm,studenth,studentm);
    
}
string chkstatus(int examh,int examm,int studenth,int studentm){
   examm=(examh*60)+examm;
   studentm=(studenth*60)+studentm;
   if(examm==studentm){
    cout<<"On time";
   }
   if((examm-studentm)<=30 && (examm-studentm)>0){
    cout<<"On time"<<endl;
    cout<<examm-studentm<<" minutes before the start";
   }
   if(examm>studentm){
    cout<<"Early"<<endl;
      int test=examm-studentm;
    if(test<60){
        cout<<test<<" minutes before the start";
    }
    else if(test>59){
        cout<<test/60<<":"<<test%60<<" hours before the start"; }
   }
   if(studentm>examm){
    cout<<"Late: "<<endl;
    int test=studentm-examm;
    if(test<60){
        cout<<test<<" minutes after the start";
    }
    else if(test>59){
      cout<<test/60<<":"<<test%60<<" hours after the start";  
    }
   }
}