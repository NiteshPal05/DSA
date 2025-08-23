#include<iostream>
using namespace std;
int changeX(int x)
{
  x=2*x;
  return x;
  return 0;
}
int main()
{
    int x=5;
    cout<<"x: "<<changeX(x)<<endl;//copy argument and return to main function
    cout<<"x: "<<x<<endl;
}