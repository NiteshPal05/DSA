#include<iostream>
using namespace std;
int btod(int n)
{
    int ans=0,power=1;
  while(n>0)
  {
    int rem=n%10;
    n/=10;
    ans+=(rem*power);
    power*=2;
  }
  return ans;
}
int main()
{
    int n;
    cout<<"enter your no. : ";
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        cout<<"decimal no. = "<<btod(n)<<endl;
    }
}