#include <iostream>
using namespace std;

void pet(int days);

main()
{
    int days;
    cout << "Enter the number of holidays: ";
    cin >> days;
    pet(days);
}

void pet(int days)
{
    int working_days = 365 - days;
    int TimeForGame = (working_days * 63) + (days * 127);
    int Diffrence = 30000 - TimeForGame;
    int ConvertInHour = Diffrence / 60;
    int ConvertInMin = ((Diffrence - ConvertInHour * 60));

    if (Diffrence > 0)
    {
        cout << "Tom sleeps well" << endl;
        cout << ConvertInHour << " hours and " << ConvertInMin << " minutes less for play.";
    }

    if (Diffrence < 0)
    {
        cout << "Tom will run away" << endl;
        cout << ConvertInHour << " hours and " << ConvertInMin << " minutes for play.";
    }
}