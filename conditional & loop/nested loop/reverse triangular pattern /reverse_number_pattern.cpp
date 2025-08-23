#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)//outter loop 
    {
        for(int j=(i+1);j>0;j--)//inner loop ->backward loop
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}