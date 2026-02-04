#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int ch = 'A';// or char ch = 'A'
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<(char)(ch)<<" ";
            ch++;
        }
        cout<<endl;
    }
}