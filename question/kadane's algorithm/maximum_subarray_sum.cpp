#include<iostream>
using namespace std;
int sum(int arr[],int size)//time complexity = O(n^2)
{
    int maximum =INT_MIN;//-infinity
    for(int st=0;st<size;st++)
    {
        int currentsum=0;//har index me jaha se star ho rha hai
        for(int end=st;end<size;end++)
        {
          currentsum+=arr[end];
          maximum = max(currentsum,maximum);
        }  
    }
    return maximum;
}
/*int printsubarray(int arr[],int size)
{
    int i;
    int maximum=INT_MIN;//-infinity
for(int start=0;start<size;start++)
    {
        for(int end=start;end<size;end++)
        {  int currentsum=0;
            for( i=start;i<=end;i++)
            {
                 cout<<arr[i];
            } 
            cout<<" ";  
        } 
        cout<<endl;
    }
     maximum=max(arr[i],maximum);
    return maximum;
}*/ //maximum subarray print nhi kar paya ....
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
    cout<<"sum of maximum subarray = "<<sum(arr,size)<<endl;//it only print sum of maximum subarray not whole elements sum

}