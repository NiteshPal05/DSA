#include<iostream>
using namespace std;
double binomial(int n)
{
     double fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
double nCr(int n, int r)
{
    double n_fact = binomial(n);
    
    double r_fact = binomial(r);
    
    double z=n-r;
    double nr_fact = binomial(z);
    
    double a = (n_fact);
    double b = (r_fact)*(nr_fact);
    return a/b;
}
int main(){
    int n,r;
    cout<<"enter your no. = ";
    cin>>n>>r;
    cout<<"nCr = "<<nCr(n,r)<<endl;
}