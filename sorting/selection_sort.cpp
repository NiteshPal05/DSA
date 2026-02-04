#include<iostream>
using namespace std;
void selection(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minindex = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minindex])  //if we change the symbol in main function it will make it descending order
            {
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in unsorted manner: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection(arr,n);
    printarray(arr,n);
    return 0;
}