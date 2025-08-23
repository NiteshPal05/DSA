#include<iostream>
using namespace std;
void reverse(int num)
{
    int ans;
    while(num>0)
    {
       int rem=num%10;
        ans=rem;
        num/=10;
        cout<<ans;
    }
    cout<<endl;
    
}
int main()
{
    reverse(12345);
}