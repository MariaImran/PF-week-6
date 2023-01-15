#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
main()
{
    int amount = 0;
    string day, month;
    cout << "enter day";
    cin >> day;
    cout << "enter month";
    cin >> month;
    cout << "enter amount";
    cin >> amount;
    cout << "amount after discount" << discount(day, month, amount);
}
float discount(string day, string month, float amount)
{
    float payable, discount;
    if (day == "sunday" && month == "october")
    {
        discount = amount * 0.1;
        payable = amount - discount;
    }
    else if (day == "sunday")
    {
        discount = amount * 0.05;
        payable = amount - discount;
    }
    else
    {
        payable = amount;
    }
    return payable;
}