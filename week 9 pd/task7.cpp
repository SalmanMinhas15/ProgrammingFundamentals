#include<iostream>
#include<cctype>
using namespace std;
void convertPINtoDanc(string pin);
main()
{
    string pin;
    cout<<"Enter your PIN (4 digits): ";
    cin >> pin;
        bool validity=true;
        for(int i=0; i<4; i++)
        if(pin.length()!=4 || !isdigit(pin[i]))      
        {
            cout<<"Invalid input";
            validity=false;
            break;
        }
        if(pin.length()==4 && validity)
        {
            convertPINtoDanc(pin);
        }
}
    
void convertPINtoDanc(string pin)
{
    string move[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    int count=0;
    for(int i=0; i<4 ;i++)
    {
        int digit=pin[i]-'0';
        digit=(digit+count)%10;
        if(i==3)
        {
            cout<<move[digit];
            break;
        }
        cout<<move[digit]<<", ";
        count++;
    }
}