#include<iostream>
using namespace std;
void selection(int arr[],int sz)
{
    for(int i=0;i<sz-1;i++)
    {
        int minidx = i;
        for(int j=i+1;j<sz;j++)
        {
           if(arr[j]<arr[minidx])
           {
             minidx = j;
           } 
        }
        swap(arr[i],arr[minidx]);
    }
}
void printarray(int arr[],int sz)
{
    for(int i = 0 ;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int sz;
    cout<<"Enter the size of an array : ";
    cin>>sz;
    int arr[sz];
    cout<<"Enter the elements of an arry: ";
    for(int i=0;i<sz;i++)
    {
        cin>>arr[i];
    }  
    selection(arr,sz);
    printarray(arr,sz);
}