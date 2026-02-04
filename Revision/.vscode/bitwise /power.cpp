#include<iostream>
using namespace std;
void pow(int n)
{
    int pow=1,ans=0;
    while(n>0)
    {
        int rem = n%2;
        ans =(rem*pow);
        if(ans==1 && pow)
        {
            cout<<"not";
            break;
        }
        n/=2;
        pow*=10;
    }
    
}
int main()
{
    int n;
    cout<<"Enter yopur no> : ";
    cin>>n;
    pow(n);
}
