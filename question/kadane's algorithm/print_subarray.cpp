#include<iostream>
using namespace std;
int main()// time complexity = O(n^3)
{
    int n=5;
    int arr[5]={1,2,3,4,5};//possible array make by this array
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
                 cout<<arr[i];// cout<<sizeof(arr[i]);(every array taken 4 byte memory)
            }
            cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"number of an subarray: "<< n*(n+1)/2<<endl;
}
