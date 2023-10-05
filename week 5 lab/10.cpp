#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a number (1-99): ";
    cin >> n;

    int tens = n / 10;
    int ones = n % 10;

    switch (tens)
    {
    case 2:
        cout << "Twenty";
        break;
    case 3:
        cout << "Thirty";
        break;
    case 4:
        cout << "Fourty";
        break;
    case 5:
        cout << "Fifty";
        break;
    case 6:
        cout << "Sixty";
        break;
    case 7:
        cout << "Seventy";
        break;
    case 8:
        cout << "Eighty";
        break;
    case 9:
        cout << "Ninety";
        break;
    }

    switch (ones)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    case 6:
        cout << "Six";
        break;
    case 7:
        cout << "Seven";
        break;
    case 8:
        cout << "Eight";
        break;
    case 9:
        cout << "Nine";
        break;
    }

    cout << endl;
}