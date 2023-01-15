#include<iostream>
using namespace std;
string isEven(int number);
main(){
int number;
cout << "Enter any number";
cin >> number;

cout << isEven(number);
}
string isEven(int number)
{
if(number % 2 == 0)
{
    return "even";
}
else
{
    return "odd";
}
}