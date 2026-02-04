#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    if(num==2||num==1)
    {
        cout<<"prime";
    }
 for(int i=2;i<=(num-1);i++)
    {
        if(num%i==0)
        {
            cout<<"not prime";
            break;
        }
        else
        
        {
            cout<<"prime";
        }
        
    }
}