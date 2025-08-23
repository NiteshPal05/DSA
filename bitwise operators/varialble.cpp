#include<iostream>
using namespace std;
int x = 10;//global scope 
void dis()
{
    cout<<x<<endl;
}
int main()
{
    for(int i=1;i<=x;i++)// i -> local scope
    {
        cout<<i<<endl;
    }
    dis();
}