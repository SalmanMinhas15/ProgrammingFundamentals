#include <iostream>
using namespace std;
int totalVolume(int array[], int boxes);
main(){
    int boxes;
    cout<<"Enter the number of boxes: ";
    cin>>boxes;
    cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;
    int array[boxes*3];
    for(int i=0; i<boxes*3; i++){
        cin >> array[i];
    }
    int result=totalVolume( array, boxes);
    cout<<"Total volume of all boxes: "<<result;
}
int totalVolume(int array[], int boxes){
    int totalVolume=0;
    int x=0,y=3;
    for(int i=0; i<boxes; i++){
        int volume=1;
        
        for(int j=x;j<y; j++){
            volume*=array[j];
        }
        x+=3;y+=3;
        totalVolume+=volume;
}
    return totalVolume;
}