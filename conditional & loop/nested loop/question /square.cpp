#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<(n-2);i++)
    {
        cout<<"*";//coloumn dekh ke 
        for(int j=0;j<(n-2);j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}