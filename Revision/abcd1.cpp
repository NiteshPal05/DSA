#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(char ch='a';ch<='d';ch++)//implicit conversion work here 
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}