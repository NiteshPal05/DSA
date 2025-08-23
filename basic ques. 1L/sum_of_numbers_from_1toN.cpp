#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter your number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    cout<<"the sum of numbers is :"<<sum<<endl;
}