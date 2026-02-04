#include<iostream>
using namespace std;
void insertion(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int curr = arr[i];
        int previous = i-1;
        while(previous>=0 && arr[previous]>curr) // if we change the symbol in main function it will make it descending order
        {
            arr[previous+1] = arr[previous];
            previous-- ;
        }
        arr[previous +1] = curr;
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
    cout<<"Enter the elements of an array in unsorted manner: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion(arr,n);
    printarray(arr,n);

}