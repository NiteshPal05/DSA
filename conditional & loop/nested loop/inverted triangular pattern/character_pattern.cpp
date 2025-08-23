#include<iostream>
using namespace std;
int main()
{
    int n=4;
    char ch ='A';
    for(int i=0;i<n;i++)
    {//spaces
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }//check numbers (n)-(i) ...ex -> 3rd row: 4-2= 2; 
        for(int j=0;j<n-i;j++)
        {
            cout<<(char)(65+i);//ascii value
            // space makes pyramid  
           // cout<<(char)(65+i)<<" ";
                    //OR
           //cout<<(char)(ch+i);
        }
        cout<<endl;
    }
}