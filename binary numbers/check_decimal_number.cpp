#include<iostream>
using namespace std;
void decimal(int n)
{
    int ans=0,power=1 /* 2^0=1 */,rem;
    while(n>0)
    {
       rem=n%10;//first remainder 
       ans+=(rem*power);//(0+(1*1)),(1+(0*2)),(1+(1*4))
       n/=10;           //1,1,5<-print 5 pot of loop last value
       power*=2;//2,4,8,16....
       cout<<ans<<endl;
    }
}
int main()
{
    decimal(101);
}