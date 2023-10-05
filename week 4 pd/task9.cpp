#include <iostream>
using namespace std;

void tpChecker(int people, int rolls);

main()
{
    int people;
    cout << "Number of people in household: ";
    cin >> people;
    int rolls;
    cout << "Number of rolls of TP: ";
    cin >> rolls;
    tpChecker(people, rolls);
}

void tpChecker(int people, int rolls)
{
    int result = rolls * 500;
    int result2 = 57 * people;
    int result3 = result / result2;

    if (result3 > 14)
    {
        cout << "Your TP will last " << result3 << " days,no need to panic!";
    }

    if (result3 < 14)
    {
        cout << "Your TP will last " << result3 << " days,buy more!";
    }
}