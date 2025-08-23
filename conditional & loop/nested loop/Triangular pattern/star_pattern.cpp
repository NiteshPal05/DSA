#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)//outter loop
    {
        for(int j=0;j<i+1;j++)//inner loop or  j<=i
        {
            cout<<"*"<<"   ";
            
        }
        cout<<endl<<endl;
        //or
        // cout<<"\n\n\n\n"<<endl;
    }
}