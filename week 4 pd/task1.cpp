#include <iostream>
using namespace std;

void result(int number1, int number2);

main()
{
    int number1;
    int number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the first number: ";
    cin >> number2;
    result(number1, number2);
}

void result(int number1, int number2)
{
    if (number1 == number2)
    {
        cout << "True";
    }
    if (number1 != number2)
    {
        cout << "False";
    }
}