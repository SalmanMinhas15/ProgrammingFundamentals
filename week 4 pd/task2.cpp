#include <iostream>
using namespace std;

void result(string name);

main()
{
    string name;
    cout << "Enter 'true' or 'false': ";
    cin >> name;
    result(name);
}

void result(string name)
{
    if (name == "true")
    {
        cout << "False";
    }

    if (name == "false")
    {
        cout << "true";
    }
}