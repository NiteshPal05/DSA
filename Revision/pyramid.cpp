#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)//outter loop
    {
        for(int j=0;j<(n-1-i);j++)//1st inner loop
        {
            cout<<" ";//print spaces 
        }
        for(int j=1;j<i+1;j++)//2nd inner loop
        {
            cout<<j;
        }
        // 2nd triangle 
        for(int j=i+1;j>0;j--)//3rd inner loop
        {
            cout<<j;
        }
        cout<<endl;
    }
}