#include<iostream>//1st function calling 2nd function and 2nd function calling 3rd function
using namespace std;
int factorial(int n)//factorial function
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r)//this function called factorial function
{
    int factorial_n=factorial(n);
    int factorial_r=factorial(r);
    int factorial_nr=factorial(n-r);
    return factorial_n/(factorial_nr*factorial_r);
}
int main()//this function called ncr function
{
    cout<<ncr(6,3)<<endl;
}