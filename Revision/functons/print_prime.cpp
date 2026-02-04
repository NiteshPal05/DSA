#include <iostream>
using namespace std;
void prime(int n)
{
    for(int i=2;i<=n;i++)
    {
    bool isprime = true;
    for (int j = 2; j <i ; j++)//two pointer approch
    {
        if (i % j == 0)
        {
            isprime = false; 
            break; 
            
        }
        
    }
    if(isprime)
    {
        cout<<i<<" ";
    }
    }
    
     
}


int main()
{
    int n;
    cout << "enter your no. :";
    cin >> n;
    prime(n);
}