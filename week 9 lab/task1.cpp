#include<iostream>
using namespace std;
void findlocation(string word);
main(){
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    findlocation(word);
   
}
void findlocation(string word)
{
 for(int i=0;word[i]!='\0';i++)
    {
      cout<<word[i]<<" found at position "<<i<<endl;  
    } 
}