#include<iostream>
using namespace std;
int minimum(int a,int b)//parameters 
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    return 0;
}
int main()
{
    cout<<minimum(89,58)/*arguments*/<<endl;
}