#include<iostream>
using namespace std;
int decimal(int n)
{
    int ans=0,rem,power=1;//2^0;
    
        while(n>0)
        {
        rem=n%10;
        ans+=(rem*power);
        n/=10;
        power*=2;
        }
    
     return ans;
}
int main()
{
   cout<<decimal(1)<<endl;
     cout<<decimal(10)<<endl;
      cout<<decimal(11)<<endl;
       cout<<decimal(100)<<endl;
        cout<<decimal(101)<<endl;
         cout<<decimal(110)<<endl;
          cout<<decimal(111)<<endl;
           cout<<decimal(1000)<<endl;
            cout<<decimal(1001)<<endl; 
             cout<<decimal(1010)<<endl;
}