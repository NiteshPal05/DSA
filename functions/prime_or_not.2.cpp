#include<iostream>
using namespace std;
void check(int n)
{
    bool a=true;
    for(int i=2;i<=(n-1);i++)//or i*i<=n
    {
        if(n%i==0)
        {
        a=false;
        break;
        }
    }
    if(a==false)
    {
        cout<<"not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }
    
}
int main()
{
    check(2);
    check(5);
    check(1);
    check(4);
    check(13);
    check(27);
    check(88);
}