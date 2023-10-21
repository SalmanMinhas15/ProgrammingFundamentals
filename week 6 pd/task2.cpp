#include<iostream>
using namespace std;
float percentoutput(float e,float m,float c,float ss,float b);
string gradeoutput(int e,int m,int c,int ss,int b);
main(){
    string name;float e,m,c,ss,b;
    float percent;string grade;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>e;
    cout<<"Enter marks for Maths: ";
    cin>>m;
    cout<<"Enter marks for Chemistry: ";
    cin>>c;
    cout<<"Enter marks for Social Science: ";
    cin>>ss;
    cout<<"Enter marks for Biology: ";
    cin>>b;
     percent=percentoutput(e,m,c,ss,b);
    cout<<"Student Name: "<<name<<endl;
   
    cout<<"Percentage: "<<percent<<"%"<<endl;
    grade=gradeoutput(e,m,c,ss,b);
    cout<<"Grade: "<<grade;
}

float percentoutput(float e,float m,float c,float ss,float b){
    float percentage=((e+m+c+ss+b)*100)/(100*5);
    return percentage;
}
string gradeoutput(int e,int m,int c,int ss,int b){
         float percent=((e+m+c+ss+b)*100)/(100*5);
         if(percent>=90 && percent<=100){
            return "A+";
         }
         else if(percent>=80 && percent<90){
            return "A";
         }
         else if(percent>=70 && percent<80){
            return "B+";
         }
         else if(percent>=60 && percent<70){
            return "B";
         }
         else if(percent>=50 && percent<60){
            return "C";
         }
         else if(percent>=40 && percent<50){
            return "D";
         }
         else if(percent<40){
            return "F";
         }
          return 0;
}