#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)//outter loop
    {//first print spaces 
      for(int j=0;j<i+1;j++)//1st inner loop
      {
        cout<<" ";
      }//second print how many numbers have 
      for(int j=0;j<n-i;j++)
      {
        cout<<(i+1);//2nd inner loop
      }
      cout<<endl;
    }
    

}