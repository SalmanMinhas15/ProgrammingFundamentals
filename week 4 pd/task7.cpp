#include <iostream>
using namespace std;

void flowerShop(int rose1, int rose2, int rose3);

main()
{
    int rose1, rose2, rose3;
    cout << "Red Roses: ";
    cin >> rose1;
    cout << "White Roses: ";
    cin >> rose2;
    cout << "Tulips: ";
    cin >> rose3;
    flowerShop(rose1, rose2, rose3);
}

void flowerShop(int rose1, int rose2, int rose3)
{
    float cal1, cal2, cal3;
    cal1 = rose1 * 2;
    cal2 = rose2 * 4.10;
    cal3 = rose3 * 2.50;

    float result = cal1 + cal2 + cal3, result1, result2;
    cout << "Original Price " << result << endl;

    if (result > 200)
    {
        result1 = (result * 20) / 100;
        result2 = result - result1;
        cout << "Price after Discount: "<<result2;
    }
}