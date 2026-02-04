#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your no.(or enter any negative no. to stop) : ";
    int num;
    for(int i=1;i<=10;i++)
    {
        if(num<0)
        {
            break;
        }
        else
        {
          cin>>num;
        }
    }

}