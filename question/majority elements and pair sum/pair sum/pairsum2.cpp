#include<iostream>
using namespace std;//time complexity = O(n^2)
void pairsum(int arr[],int target,int size)
{
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
              cout<<i<<","<<j<<endl;//print index values or print all the condition which can't we do in vector return value
              //cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }
   
}
int main()
{
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   int target;
   cout<<"enter target value: ";
   cin>>target;
   pairsum(arr,target,size);


}