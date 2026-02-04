#include<iostream>
using namespace std;
void subarray(int arr[],int size) // TC - O(n^3)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    subarray(arr,size);
    cout<<"total subarray = "<<size*(size+1)/2<<endl;
    
    
   

    
}
