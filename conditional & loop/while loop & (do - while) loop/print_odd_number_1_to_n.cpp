#include<iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"enter any number: ";
    cin>>num;
    while(i<=num)
    {
        if(i%2!=0)
        { 
            cout<<i<<endl;
            
        }
        i++;
    }
    
}