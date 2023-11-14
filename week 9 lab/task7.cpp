#include<iostream>
using namespace std;
double totalResistance(double resistance[], int size);
main()
{
    int size;
    cout <<"Enter the number of resistors in the series circuit: ";
    cin >> size;
    cout<<"Enter the resistance values (in ohms) of the"<<size<<"resistors, one per line:"<<endl;
    double resistance[size];
    for(int i=0 ; i<size ; i ++)
    {
        cin >> resistance[i];
    }
    double result = totalResistance( resistance , size);
    cout << "The total resistance of the series circuit is "<< result<<" ohms.";
}
double totalResistance(double resistance[], int size)
{
    double total = 0;
    for(int i=0 ; i<size ; i ++)
    {
        total += resistance[i]; 
    }
    return total;

}
