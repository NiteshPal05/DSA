#include<iostream>
using namespace std;
int main()
{
    int power = 1,ans=0,n,num;
    cout<<"enter your power :" ;
    cin>>n;
    cout<<"enter your number :" ;
    cin>>num;

    
    for(int i=0;i<n;i++)
    { 
      power = power*num;
    }
     cout<<"answer = "<<power<<endl;
    

}