#include <iostream>
using namespace std;

void result(string Country_name, int Ticket_Price);

main()
{
    string Country_name;
    cout << "Enter the country name: ";
    cin >> Country_name;
    int Ticket_Price;
    cout << "Enter the Price of Ticket in dollars:$";
    cin >> Ticket_Price;
    result(Country_name, Ticket_Price);
}

void result(string Country_name, int Ticket_Price)
{
    float Discount1, Discount2;

    if (Country_name == "Pakistan")
    {
        Discount1 = (Ticket_Price * 5) / 100;
        Discount2 = Ticket_Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (Country_name == "Ireland")
    {
        Discount1 = (Ticket_Price * 10) / 100;
        Discount2 = Ticket_Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (Country_name == "India")
    {
        Discount1 = (Ticket_Price * 20) / 100;
        Discount2 = Ticket_Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (Country_name == "England")
    {
        Discount1 = (Ticket_Price * 30) / 100;
        Discount2 = Ticket_Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (Country_name == "Canada")
    {
        Discount1 = (Ticket_Price * 45) / 100;
        Discount2 = Ticket_Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }
}