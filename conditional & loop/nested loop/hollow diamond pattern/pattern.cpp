#include<iostream>
using namespace std;
int main()//logic made with relate to i and n
{
    int n=4;
    //1st triangle or top part of triangle
    for(int i=0;i<n;i++)
    {//print spaces
        for(int j=0;j<(n-1-i);j++)
         {
         cout<<" ";        
         }
         cout<<"*";//print star 
         // print spaces
    if(i!=0)
    {
         for(int j=0;j<((2*i)-1);j++)//odd condition
         {
         cout<<" ";   
         }
         cout<<"*";
         
    }
    cout<<endl;
}
// 2nd part of triangle or bottom part of triangle 
for(int i=0;i<(n-1);i++)
{
    for(int j=0;j<i+1;j++)
    {
        cout<<" ";
    }
        cout<<"*";
    if(i!=(n-2))//n-2 becus i ki vlaue
                // i=2 -> last star exist
    {    
    for(int j=0;j<(2*n-2*i-5);j++)//odd condition
    {
        cout<<" ";
    }    
        cout<<"*";
    }
    cout<<endl;
}
}