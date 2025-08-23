#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter you row: ";
    cin>>num;
    int num1;
        cout<<"enter your coloumn: ";
        cin>>num1;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}