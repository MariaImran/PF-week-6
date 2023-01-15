#include <iostream>
using namespace std;
int greatest(int number1, int number2, int number3);
main()
{
    int number1, number2, number3;
    greatest(number1, number2, number3);
}
int greatest(int number1, int number2, int number3)
{

    cout << "Enter number 1:";
    cin >> number1;
    cout << "Enter number 2:";
    cin >> number2;
    cout << "Enter number 3:";
    cin >> number3;
    if (number1 > number2)
    {
        if (number1 > number3)
        {
            cout << "number 1 is greatest.";
        }
    }
    if (number2 > number3)
    {
        if (number2 > number1)
        {
            cout << "number2 is greatest.";
        }
    }
    if (number3 > number1)
    {
        if (number3 > number2)
        {
            cout << "number 3 is greatest.";
        }
    }
    return 0;
}