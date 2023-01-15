#include <iostream>
using namespace std;
float calculateBill(string product, string city, int numberOfProduct);
main()
{
    string product,city;
    cout << "Enter product:";
    cin >> product;
    cout << "Enter city:";
    cin >> city;
    int numberOfProduct;
    cout << "Enter number of product:";
    cin >> numberOfProduct;
    cout << "Your bill is:" <<calculateBill(product, city, numberOfProduct);
}
float calculateBill(string product, string city, int numberOfProduct)
{
    float bill;
    if(product == "coffee" && city == "sofia")
    {
        bill = numberOfProduct * 0.50;
    }
    if(product == "water" && city == "sofia")
    {
        bill = numberOfProduct * 0.80;
    }
    if(product == "beer" && city == "sofia")
    {
        bill = numberOfProduct * 1.20;
    }
    if(product == "sweets" && city == "sofia")
    {
        bill = numberOfProduct * 1.45;
    }
    if(product == "peanuts" && city == "sofia")
    {
        bill = numberOfProduct * 1.60;
    }
    if(product == "coffee" && city == "plovdiv")
    {
        bill = numberOfProduct * 0.40;
    }
    if(product == "water" && city == "plovdiv")
    {
        bill = numberOfProduct * 0.70;
    }
    if(product == "beer" && city == "plovdiv")
    {
        bill = numberOfProduct * 1.15;
    }
    if(product == "sweets" && city == "plovdiv")
    {
        bill = numberOfProduct * 1.30;
    }
    if(product == "peanuts" && city == "plovdiv")
    {
        bill = numberOfProduct * 1.50;
    }
    if(product == "coffee" && city == "varna")
    {
        bill = numberOfProduct * 0.45;
    }
    if(product == "water" && city == "varna")
    {
        bill = numberOfProduct * 0.70;
    }
    if(product == "beer" && city == "varna")
    {
        bill = numberOfProduct * 1.10;
    }
    if(product == "sweets" && city == "varna")
    {
        bill = numberOfProduct * 1.35;
    }
    if(product == "peanuts" && city == "varna")
    {
        bill = numberOfProduct * 1.55;
    }
    return bill;
}