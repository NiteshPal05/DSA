#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)// '=' sign use for odd
    {
        swap(arr[start],arr[end]);//swap is a function
        start++;
        end--;
    }
}
int main()
{
    int arr[]={98,76,66,55};
    int size=4;
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
