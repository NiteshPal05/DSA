#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter your number: ";
    cin>>num;
    bool isprime=true;//this is used for only 2 
    for(int i=2;i<=(num-1);i++)// or i*i<=n
    {
        if(num%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==false)
    {
        cout<<"not prime";
    }
    else
    {
        cout<<"prime";
    }
}