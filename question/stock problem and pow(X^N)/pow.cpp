#include<iostream>
using namespace std;
double pow(double power,double base)//double show decimal values
{
    long n = power;
    double ans=1;
    if(n==0)
    {
        return 1;
    }
    if(base==0)
    {
        return 0;
    }
    if(base==1)
    {
        return 1;
    }
    if(base==-1&&n%2==0)
    {
        return 1;
    }
    if(base==-1&&n%2!=0)
    {
        return -1;
    }
    if(n<0)//if power is in negative
    {
        base = 1/base;
        n = -n;//already negative hoga change into positive
    }
    while(n>0)
    {
        if(n%2==1)
        {
            ans*=base;
        }
        base*=base;//base square
        n/=2;
    }
    return ans;
}
int main()
{
    double power;
    cout<<"enter the power: ";
    cin>>power;
    double base;
    cout<<"enter the base: ";
    cin>>base;
    
    cout<<"answer = "<<pow(power,base)<<endl;
}