# include<iostream>
using namespace std;
void insertion(int arr[],int sz)
{
    for(int i=1;i<sz;i++) // assuming 1 element of an array is already sorted so we take i=1
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && curr<arr[prev])
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
void printarray(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
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
    insertion(arr,sz);
    printarray(arr,sz);
}