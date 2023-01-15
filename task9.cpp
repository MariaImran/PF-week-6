#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    cout << "Enter speed";
    cin >> speed;
    cout << checkSpeed(speed);
}
string checkSpeed(float speed)
{
    string checkSpeed;
    if (speed == 10)
    {
        cout << "Slow";
    }
    if (speed > 10 && speed <= 50)
    {
        cout << "Average";
    }
    if (speed > 50 && speed <= 150)
    {
        cout << "fast";
    }
    if (speed > 150 && speed <= 1000)
    {
        cout << "ultra fast";
    }
    if (speed > 1000)
    {
        cout << "extremely fast";
    }
    return checkSpeed;
}
