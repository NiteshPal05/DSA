#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        int num=1;
        for(int j=0;j<i+1;j++)//or j<=i
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}