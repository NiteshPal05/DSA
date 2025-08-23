#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int currentsum=0,maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        maximum=max(currentsum,maximum);
        if(currentsum<0)//currentsum value reinitialized with zero
        {
            currentsum=0;
        }
    }
    cout<<"sum of maximum subarray = "<<maximum<<endl;
}