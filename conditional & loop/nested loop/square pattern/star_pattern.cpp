#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)//always start from zero and end with (n-1)
    {
        for(int j=0;j<n;j++)//always start from zero and end with (n-1)
        {
            cout<<" * ";//for coloumn
        }
        cout<<endl;//for row
    }
}