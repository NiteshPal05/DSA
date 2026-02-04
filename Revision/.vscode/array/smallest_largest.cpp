#include<iostream>
using namespace std;
void small_large(int arr[], int n)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int num,smallest_index,largest_index;
    for(int i=0;i<n;i++)
    {
         num = arr[i];
         smallest = min(num,smallest); //. or we use if(samllest > num) -> smallest = num;
         smallest_index = i;
         largest = max(num,largest);// or we use if(largest< num )-> largest = num;
         largest_index = i;
    }
  cout<<"smallest = "<<smallest<<" and index = "<<smallest_index<<endl;
  cout<<"largest = "<<largest<<" and index = "<<largest_index<<endl;
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  small_large(arr,n);
}

