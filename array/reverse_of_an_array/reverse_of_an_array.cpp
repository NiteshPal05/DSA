#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size =6;// 2 pointer approch
    int start=0;
    int end= size-1;
    while(start<=end)
    {
      swap(arr[start],arr[end]);//swap is a function
      start++;
      end--;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
  cout<<endl;
}