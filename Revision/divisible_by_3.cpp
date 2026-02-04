#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter your number: ";
    cin>>num;
    cout<<"numbers are: ";
    for(int i=1;i<=num;i++)
    {
       if(i%3==0)
       {
        cout<<i<<" ";
        sum+=i;
       }
    }
    cout<<endl;
    cout<<"sum = "<<sum<<endl;
}