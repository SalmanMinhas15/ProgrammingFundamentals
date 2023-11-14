#include<iostream>
#include<string.h>
using namespace std;
void jazzifyChords(string chords[], int numChords);
main(){
    int numChords;
    cout<<"Enter the number of chords: ";
    cin >> numChords;
    cout<<"Enter "<<numChords<<" chords, one per line:"<<endl;
    string chords[numChords];
    for(int i=0;i<numChords;i++)
    {
        cin >> chords[i];
    }
    jazzifyChords(chords,numChords);
}
void jazzifyChords(string chords[], int numChords)
{
    cout<<"Jazzified chords: [";
    for(int i=0;i<numChords;i++)
    {
        int length=chords[i].length();
            if(chords[i][length-1]!='7'){
                chords[i]+='7';
            }
            if(i<numChords-1)
            {
                cout<<chords[i]<<", ";
            }
            else{
            cout<<chords[i];
            }
        } 
        cout<<"]"; 
    }
