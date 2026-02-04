#include<iostream>
using namespace std;
int sum(int a,int b)
{
     return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter your 1st number: ";
    cin>>a;
    cout<<"Enter your 2nd number: ";
    cin>>b;
    cout<<"sum = "<<sum(a,b)<<endl;
}