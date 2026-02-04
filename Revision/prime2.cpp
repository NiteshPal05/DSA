#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    bool isprime=true;
    cout<<"series of prime no. = ";
    for(int i=2;i<=(num-1);i++) // or we can use i*i<=num
    {
        if(num%i==0)
        {
            isprime = false;
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
    cout<<endl;
}