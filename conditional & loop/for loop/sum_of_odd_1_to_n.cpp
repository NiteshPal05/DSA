#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout<<"enter any number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            sum+=i;
        }
        
    }
    cout<<sum<<endl;

}