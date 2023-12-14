#include <iostream>
using namespace std;
int rotations(string array[], int length);
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin >> length;
    cout<<"Enter the elements of the array (\"left\" or \"right\"):"<<endl;
    string array[length];
    for(int i=0;i<length;i++){
        cin >> array[i];
    }
    int result=rotations( array, length);
    cout<<"Number of full rotations: "<<result;
}
int rotations(string array[], int length){
    int count=1;
     for(int i=1;i<length;i++){
        if(array[i]==array[i-1]){
            count++;
        }
}
    count=count/4;
    return count;
}