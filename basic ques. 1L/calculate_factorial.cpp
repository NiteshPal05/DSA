#include<iostream>
using namespace std;
int main()
{
    int num,factorial=1;
    cout<<"enter the value of num: ";
    cin>>num;
    if(num==1||num==0)
    {
        cout<<"1";
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
        factorial *=i;
        
        }
        cout<<"the factorial of "<<num<<" = "<<factorial<<endl;
        
    }
}