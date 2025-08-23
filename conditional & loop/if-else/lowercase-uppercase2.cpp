#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter your character ";
    cin>>ch;
    if(ch>=65&&ch<=90)//this is ascii value and implicit conversion
    {
        cout<<"uppercase";//char into int automatic by compiler
    }
    else
    {
        cout<<"lowercase";
    }
}