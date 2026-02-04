#include<iostream>
using namespace std;
int main()
{
  
    for(int i=1;i<=50;i++)
    {
        if(i%5==0 && i%7==0)
        {
            break;
        }
        else
        {
          cout<<i<<" ";
        }
        
    }
    cout<<endl;
}