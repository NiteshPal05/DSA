#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num%7==0&&num%63==0)
    {
        cout<<"common multiple";
    }
    else
    {
        cout<<"not a common multiple";
    }
}