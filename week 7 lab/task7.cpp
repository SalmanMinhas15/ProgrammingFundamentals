#include<iostream>
#include<iomanip>
using namespace std;
void totalnumbers(int n);
main(){
    int n;
    cout<<"Enter numbers count: ";
    cin>>n;
    totalnumbers(n);
}
void totalnumbers(int n){
    int a;float count1st=0,count2nd=0,count3rd=0,count4th=0,count5th=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter a number: ";
        cin>>a;
        if(a<=200){
           count1st++;
        }
        else if(a>200 && a<400)
        {
            count2nd++;
        }
        else if(a>=400 && a<600)
        {
            count3rd++;
        }
        else if(a>=600 && a<800){
            count4th++;
        }
        else if(a>=800){
            count5th++;
        }
    }
    cout<<fixed<<setprecision(2)<<(count1st*100)/n<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<(count2nd*100)/n<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<(count3rd*100)/n<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<(count4th*100)/n<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<(count5th*100)/n<<"%"<<endl;
}
    