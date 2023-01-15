#include <iostream>
using namespace std;
void calculatePrice(int kilometers, string time, string transport);
float lowestPrice(float transportPrice);
main()
{
    int kilometers;
    string time, transport;
    float transportPrice;
    cout << "enter distance in kilometers:";
    cin >> kilometers;
    cout << "enter time (day or night)";
    cin >> time;
    cout << "enter transport";
    cin >> transport;
    calculatePrice(kilometers, time, transport);
    lowestPrice(transportPrice);
}
void calculatePrice(int kilometers, string time, string transport)
{
    float taxiPrice, busPrice, trainPrice;
    if (transport == "taxi")
    {
        if (time == "day")
        {
            taxiPrice = 0.79 * kilometers;
        }
        else
        {
            taxiPrice = 0.90 * kilometers;
        }
        cout << "taxi :" << taxiPrice << endl;
    }
    else if (transport == "bus" && kilometers <= 20)
    {
        if (time == "day")
        {
            busPrice = 0.09 * kilometers;
        }
        else
        {
            busPrice = 0.09 * kilometers;
        }
        cout << "bus :" << busPrice << endl;
    }
    else(transport == "train" && kilometers <= 100);
        {
            if (time == "day")
            {
                trainPrice = 0.06 * kilometers;
            }
            else
            {
                trainPrice = 0.06 * kilometers;
            }
            cout << "train :" << trainPrice << endl;
        }
}
float lowestPrice(float transportPrice)
{
    float taxiPrice, trainPrice, busPrice, trasportPrice;
    if ((taxiPrice < busPrice) && (taxiPrice < trainPrice))
    {
        cout << "taxi is cheapest" <<taxiPrice;
    }

    else if ((busPrice < taxiPrice) && (busPrice < trainPrice))
    {
        cout << "bus is cheapest" <<busPrice;
    }
    else
    {
        cout << "train is cheapest" <<trainPrice;
    }
    return 0;
}
