#include<iostream>
using namespace std;
int main()
{
    char ch;
    for(int i=0;i<4;i++)
    {
        for (ch=65;ch<=68;ch++)//implicit conversion + ascii value use
        {
            cout<<ch;//for lowercase a =97; A=65
        }
        cout<<endl;
    }
}