#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
         char ch='A';//define row but first coloumn so we take char A before inner loop
         for(int j=0;j<n;j++)//this is coloum star from 2 
        {
            
         
         cout<< ch ;//coloumn no endl use
         ch+=1;//ch = ch+1 mean a+1=b or 65+1=66 <- b 
        }
         cout<<endl;//row
    }
}

//you can chaeck with
/*for(int i=0;i<n;i++)
{
    char ch = 'A';
    cout<<ch<<enl;//row
}*/