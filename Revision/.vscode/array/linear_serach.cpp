#include<iostream>
using namespace std;
int linearsearch(int target , int arr[], int size)
{
    int num;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == target)
        {
          return i ;
          break;
        }
       
    }
    return -1;
   
}
int main()
{
    int size,target;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter the target value: ";
    cin>>target;
    cout<<"index of target value = "<<linearsearch(target,arr,size)<<endl;

}