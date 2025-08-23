#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter your character: ";
    cin>>ch;
    if(ch>='a'&&ch<='z')//character store in single codes
    {
        cout<<"lowercase";
    }
    else
    {
        cout<<"uppercase";
    }
}