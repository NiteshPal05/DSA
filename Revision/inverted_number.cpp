#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i=0;i<n;i++)//outter loop
    {
        //print spaces
        for(int j=0;j<i+1;j++)//1st inner loop 
        {
            cout<<" ";
        }
        //print numbers
        for(int j=0;j<n-i;j++)//2nd inner loop
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}