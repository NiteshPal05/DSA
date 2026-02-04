#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter your number: ";
    cin>>num;
    if(num==2||num==1)/* prime condition only divided by num or 1
                that's by we take i =2 */ 
    {
        cout<<"prime";
        
    }
    else if(num==0)
    {
        cout<<"whole number";
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