#include<iostream>
using namespace std;
void totalCars(int cars[][5], string color[5]);
main()
{
    string color[5]={"Red","Black","Brown","Blue","Gray"};
    int cars[5][5]={int Suzuki[5]={10,7,12,10,4},
    int Toyota[5]={18,11,15,17,2},
    int Nissan[5]={23,19,12,16,14},
    int BMW[5]={7,12,16,0,2},
    int Audi[5]={3,5,6,2,1}};
    totalCars(cars,color);
}
void totalCars(int cars[][5], string color[5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==1 && color[j]=="Blue")
            {
                cout<<"\nToyota Blue Cars: "<<array[i][j];
            }
            if(color[j]=="Red")
            {
                redcolor+=color[j]
            }            
        }
    }
}