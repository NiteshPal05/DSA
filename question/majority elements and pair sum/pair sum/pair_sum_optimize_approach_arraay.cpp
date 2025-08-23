#include<iostream>
using namespace std;
void pairsum(int arr[],int target,int size)// time complexity = O(n) only one loop is used
{
    int i=0,j=size-1;
    while(i<j)
    {
        int pairsum = arr[i]+arr[j];
        if(pairsum<target)
        {
           i++;
        }
        else if(pairsum>target)
        {
            j--;
        }
        else if(pairsum==target)
        {
            cout<<i<<","<<j<<endl;
            break;
        }
    }
}
int main()
{
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter your target value: ";
    cin>>target;
    pairsum(arr,target,size);
}
