#include<iostream>
using namespace std;
int greatest(int n)
{
    int greatest,originalno,num;
    greatest = INT_MIN;// -infinity
    // while(n<0) for negative
    while(n>0) // for positive
    {
    num = n%10;
    originalno=num;
    greatest=max(greatest,originalno);
    // if(originalno>greatest)
    // {
    //     greatest = originalno;
    // }
    n=n/10;
    }
    return greatest;

}
int main()
{
    cout<<"Enter your no. : ";
    int n;
    cin>>n;
    cout<<"greatest no. = "<<greatest(n)<<endl;
}