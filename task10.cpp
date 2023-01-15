#include <iostream>
using namespace std;
float totalIncome(string screen, int rows, int columns);
main()
{
    string screen;
    int rows, columns, noOfChairs;
    cout << "enter screen";
    cin >> screen;
    cout << "enter rows";
    cin >> rows;
    cout << "enter columns";
    cin >> columns;
    noOfChairs = rows * columns;
    cout << "total income is:" << totalIncome(screen, rows, columns);
}
float totalIncome(string screen, int rows, int columns)
{
    float income;
    int noOfChairs;
    if (screen == "premiere")
    {
        income = 12.00 * noOfChairs;
    }
    if (screen == "normal")
    {
        income = 7.50 * noOfChairs;
    }
    if (screen == "discount")
    {
        income = 5.00 * noOfChairs;
    }
    return income;
}