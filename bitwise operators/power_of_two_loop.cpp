#include<iostream>
using namespace std;
int main()
{
    int power = 1,ans=0,n;
    cout<<"enter your power :" ;
    cin>>n;
    
    for(int i=0;i<n;i++)
    { 
      power = power*2;
    }
     cout<<"answer = "<<power<<endl;
    

}