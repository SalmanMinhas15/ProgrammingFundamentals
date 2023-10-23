#include<iostream>
using namespace std;
void chkpatients(int visiteddays);
main(){
    int visiteddays;
    cout<<"Enter Number of days you visited hospital: ";
    cin>>visiteddays;
    chkpatients(visiteddays);
}
void chkpatients(int visiteddays){
        int a,treatedpatients=0,untreatedpatients=0;
    for(int i=1;i<=visiteddays;i++)
    {
        cout<<"Number of patients who visited hospital on Day "<<i<<": ";
        cin>> a;
        if(a<=7)
        {
          treatedpatients+=a;
        }
        if(a>7)
        {
            treatedpatients=treatedpatients+7;
            untreatedpatients=untreatedpatients+(a-7);   
        }
        if(i%3==0)
        {
            if(untreatedpatients>treatedpatients)
            {
                treatedpatients+=1;
                untreatedpatients-=1;
            }
        }
    }
    cout<<"Treated Patients: "<<treatedpatients<<endl;
    cout<<"Untreated Patients: "<<untreatedpatients;
    // cout<<"Untreated Patients: "<<totalpatients-treatedpatients;
}