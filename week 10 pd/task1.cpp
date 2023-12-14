#include <iostream>
using namespace std;
int totalprogressDay(int array[], int sizeofDays);
main(){
    int sizeofDays;
    cout<<"Enter the number of Saturdays: ";
    cin>>sizeofDays;
    int array[sizeofDays];
    for(int i=0; i<sizeofDays; i++){
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin >> array[i];
    }
     int result=totalprogressDay(array, sizeofDays);
    cout<<"Total progress days: "<<result;
}
int totalprogressDay(int array[], int sizeofDays){
    int count=0;
    for(int i=1; i<sizeofDays; i++){
        if(array[i]>array[i-1]){
            count++;
        }
    }
        return count;
}
