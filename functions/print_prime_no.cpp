#include<iostream>
using namespace std;
bool print(int n)
{
    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
          return false;  
        }
    }
    return true;
    
}
void check(int n)
{
   for(int i=2;i<=n;i++)
   {
    if(print(i)==true)
    {
        cout<<i<<" ";
    }
   }
}
int main()
{
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    check(n);
}