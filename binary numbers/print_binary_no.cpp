#include<iostream>
using namespace std;
int binary(int n)
{
    int rem,ans=0,power=1;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        ans+=(rem*power);
        power*=10;
    }
    return ans;
}
int main()
{
   /* cout<<binary(1)<<endl;
    cout<<binary(2)<<endl;
    cout<<binary(5)<<endl;
    cout<<binary(10)<<endl; */
    
    for(int i=1;i<=10;i++)
    {
        cout<<binary(i)<<endl;
    }

    

}