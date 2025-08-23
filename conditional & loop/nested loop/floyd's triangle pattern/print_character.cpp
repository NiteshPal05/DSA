#include<iostream>
using namespace std;
int main()
{
    int n=4;
    char ch='A';//or int ch=65;ASCII value
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)//or for(int j=(i+1);j>0;j--)
        {
            cout<<ch<<" ";//for ascii value cout<<(char)ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}