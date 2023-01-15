#include <iostream>
using namespace std;
void similar(string name1, string name2);
main()
{
    string name1, name2;
    cout << "Enter name 1:";
    cin >> name1;
    cout << "Enter name 2";
    cin >> name2;
    similar(name1, name2);
}
void similar(string name1, string name2)
{

    if (name1 == name2)
    {
        cout << "Names are same";
    }
    else
    {
        cout << "Names are not same";
    }
 }