#include<iostream>
using namespace std;
void decimalno(int n)
{
    int ans=0;//if we don't take ans=0 then compile automatic give garbage value to ans
    int power=1;
    int remainder;
    while(n>0)//n=0 loop close 
    {
        remainder=n%2;
        n=n/2;//this work only if n is in integer value 
        ans+=(remainder*power);//(0+0*1),(0+1*10),(10+0*100),(10+1*1000)
        power=(power*10);//for backward no.
        cout<<ans;//for check concept
        cout<<endl;
    } 
     
    
}
int main()
{
    decimalno(5);
}