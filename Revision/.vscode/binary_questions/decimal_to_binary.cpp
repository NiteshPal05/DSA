#include<iostream>
using namespace std; // convert decimal to binary
int dtob(int n)
{
    int power =1, ans=0;
    while(n>0)
    {
        int rem =n%2;
        n /=2;
        ans +=(rem*power);
        power*=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter your number(press -1 for exit): ";
    while(n>0)
    {
        cin>>n;
        cout<<"binary no. : "<<dtob(n)<<endl;
        if(n==-1)
        {
            break;
        }
    }
}