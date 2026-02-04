#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    {
        cout<<"*";

    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"*";
         for(int j=1;j<n-1;j++)// j=1 for remove 1st ittration
        {
            
            cout<<" ";
           
        }
        cout<<"*";
        cout<<endl;
    }
     for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}