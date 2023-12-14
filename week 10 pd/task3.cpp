#include <iostream>
using namespace std;
bool output(int array[], int lengthofArray, int lengthofCycle);
main(){
    int lengthofArray,lengthofCycle;
    cout<<"Enter the length of the array: ";
    cin>> lengthofArray;
    cout<<"Enter the elements of the array:"<<endl;
    int array[lengthofArray];
    for(int i=0; i<lengthofArray; i++){
        cin>> array[i];
    }
    cout<<"Enter the length of the cycle: ";
    cin >> lengthofCycle;
    bool result=output( array, lengthofArray, lengthofCycle);;
    cout<<"Output: "<<result;
}
bool output(int array[], int lengthofArray, int lengthofCycle){
    bool result=false;
    if(lengthofCycle>lengthofArray){
        result=true;
    }
    int count=0;
    for(int i=0;i<lengthofArray; i++){
        if(array[i]==lengthofCycle){
            count++;
        }
    }
    if(count>=2){
        result=true;
    }
    return result;
}