#include<iostream>
using namespace std;
int main()
{
    int num,factorial=1;
    cout<<"enter any number: ";
    cin>>num;
    if(num==0||num==1)
    {
        cout<<"1";
    }
    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;//ex- 5*4*3*2*1
    }
    cout<<"factorial of "<<num<<" is "<<factorial<<endl;
}