#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b = a++;
    cout<<"the value of b = "<<b<<endl;//increment
    b = a++;
    cout<<"the value of b = "<<b<<endl;//increment
    b = --a;
    cout<<"the value of b = "<<b<<endl;//decrement
}