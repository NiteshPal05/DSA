#include<iostream>
using namespace std;
void changeX(int x)
{
  x=2*x;
  cout<<"x: "<<x<<endl;//copy argument at new address and then print 
}
int main()
{
    int x=5;
    changeX(x);//function calling 
    cout<<"x: "<<x<<endl;//print x value in main
}