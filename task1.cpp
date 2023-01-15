#include<iostream>
using namespace std;
main()
{
 int rollNumber;
 string name;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter your roll number:";
 cin>>rollNumber;
 if(rollNumber <= 501)
    {
     if(name == "Ali")
        cout<<"Congratulations!!";
    }
}