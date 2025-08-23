#include<iostream>
using namespace std;
int main()
{
    int n=4;//logic made with n and i
    //top part of pattern
    for(int i=0;i<n;i++)//1st outter loop
    {   //1st triangle
        for(int j=0;j<i+1/* or j<=i*/;j++)//inner loop for *
        {
            cout<<"*";
        }
        for(int j=0;j<(n-i-1);j++)//inner loop for spaces
        {
            cout<<" ";
        }
        //2nd triangle
        for(int j=0;j<(n-i-1);j++)//inner loop for spaces
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)//inner loop for *
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom part of the pattern
    for(int i=0;i<n;i++)
    {   //3rd triangle
        for(int j=0;j<(n-i);j++)//inner loop for *
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)//inner loop for space
        {
            cout<<" ";
        }
        //4th triangle
        for(int j=0;j<i;j++)//inner loop for space
        {
            cout<<" ";
        }
        for(int j=0;j<(n-i);j++)//inner loop for *
        {
            cout<<"*";
        }
        cout<<endl;
    }

}