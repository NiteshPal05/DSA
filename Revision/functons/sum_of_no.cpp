#include<iostream>
using namespace std;
int sum(int n)
{
    int sum=0,num;
    while(n>0)
    {
        num=n%10;
        n/=10;
        sum+=num;
    }
    return sum;
}
    int main()
    {
        int n;
        cout<<"enter your no. : ";
        cin>>n;
        cout<<"sum = "<<sum(n)<<endl;
    }
