#include<iostream>
using namespace std;
int pow(int i)
{
    return 1<<i;//left shift
}
int main()
{
    cout<<"enter  exponential no. : ";
    int i;
    cin>>i;
    cout<<"ans = "<<pow(i)<<endl;
}