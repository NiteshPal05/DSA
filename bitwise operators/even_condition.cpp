#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if((num&1)==0)//kya concept hai  7 -> (b.n)111 -> 1 & 1 -> 1!=0 ans -> odd
    {             // 8 -> 1000-> 0&0 -> 0==0 ans even 
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
}