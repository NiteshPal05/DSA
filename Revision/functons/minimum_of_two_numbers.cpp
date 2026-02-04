#include<iostream>
using namespace std;
int min(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a,b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    cout<<"minimum no. :"<<min(a,b)<<endl;
}