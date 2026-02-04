#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        // for(int j=0;j<(n+2-2*i);j++) // Nitesh
        //for(int j=2*(n-i)-2;j>0;j--) // Priyanshu
        // for(int j=0;j<2*(n-i-1);j++) // Uday (best)
        // for(int j=1;j<=2*(n-i);j++) // vs (best)
        {
            cout<<" ";
        }
        
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
        // for(int j=0;j<(2*(i+2)-n);j++)
          for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(n-i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}