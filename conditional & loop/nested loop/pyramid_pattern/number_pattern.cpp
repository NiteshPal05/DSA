#include<iostream>
using namespace std;
int main()
{
    int n=4;//step1: pyramid divided into two trangles
    for(int i=0;i<n;i++)//outter loop
    {
        for(int j=0;j<n-1-i;j++)//print space
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)//print number of 1st triangle
        {
            cout<<j;
        }
        for(int j=i;j>0;j--)//print number of 2nd triangle backward loop
        {
            cout<<j;
        }
        cout<<endl;

    }
}