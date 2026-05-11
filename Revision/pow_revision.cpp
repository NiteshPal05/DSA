# include<iostream>
using namespace std;

double pow(double base,long exp)
{
    
    if(exp<0)
    {
        base = 1/base;
        exp = -exp;  
    }
    if (base == 0 )
    {
        return 0;
    }
    if(base == 1)
    {
        return 1;
    }
    if(exp == 0)
    {
        return 1;
    }
    if(base == -1 && exp%2==0)
    {
        return 1;
    }
    if(base == -1 && exp%2!=0)
    {
        return -1;
    }
    double ans = 1; // to store decimal value 
    while(exp>0)
    {
        if(exp%2 == 1)
        {
            ans = ans*base;
        }
        base *=base;
        exp/=2;
    }
    return ans ;
}
int main()
{
    int base;
    cout<<"Enter your base : ";
    cin>>base;
    int exp;
    cout<<"Enter your exponential value : ";
    cin>>exp;
    cout<<"answer : "<<pow(base,exp)<<endl;
}