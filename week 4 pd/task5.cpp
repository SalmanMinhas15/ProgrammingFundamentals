#include <iostream>
using namespace std;

void possibleBonus(int Your_Position, int Friend_Position);

main()
{
    int Your_Position;
    cout << "Enter your position: ";
    ;
    cin >> Your_Position;
    int Friend_Position;
    cout << "Enter your friend's position:";
    cin >> Friend_Position;
    possibleBonus(Your_Position, Friend_Position);
}

void possibleBonus(int Your_Position, int Friend_Position)
{
    int result = Friend_Position - Your_Position;

    if (result <= 6)
    {
        cout << "true";
    }

    if (result > 6)
    {
        cout << "false";
    }
}