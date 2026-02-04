#include<iostream>
using namespace std;
int main()
{
    int sum = 0, i = 1;
    while(i<=100)
    {
        if(i%2==0)
        {
      
        sum+=i;
    }
      i++;
}
    cout<<"sum of even no. ="<<sum<<endl;
}