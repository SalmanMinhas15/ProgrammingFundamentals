#include <iostream>
#include<string>
using namespace std;
int numberofletters(string array[], int words, char letter);
main()
{
    int words;char letter;
    cout<<"Enter how many words you want to enter: ";
    cin >> words;
    string array[words];
    for(int i=0; i<words; i++){
        cout<<"Enter word "<<i+1<<": ";
        cin >> array[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin >> letter;
    int result=numberofletters( array, words,  letter);
    cout<<letter<<" shows up "<<result<<" times in the data.";
}
int numberofletters(string array[], int words, char letter){
    int count=0;
    for(int i=0; i<words; i++){
        for(int j=0;j<array[i].length(); j++){
            if(array[i][j]==letter){
                count++;
            }
        }
    }
    return count;
}