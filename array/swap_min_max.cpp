#include<iostream>
using namespace std;
void maxandmin(int arr[],int size)
{
   
    int max=0;
    int min=0;
    int smallest = INT_MAX; // + infinity
    int largest = INT_MIN;  // - infinity
     for(int i=0;i<size;i++)
     {
       if(arr[i]<smallest)
       {
        smallest= arr[i];
        min=i;
       }
        if(arr[i]>largest)
       {
       largest= arr[i];
        max=i;
       }
         
     }
     cout<<"smallest array element = "<<smallest<<endl;
     cout<<"largest array element = "<<largest<<endl; 
     
     cout<<"after swapping the array element : ";
     for(int i=0;i<size;i++)
     {
        swap(arr[max],arr[min]);//for swapping 
        cout<<arr[i]<<" ";
     } 
     cout<<endl;   
}
int main()
{   int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    maxandmin(arr,size);

}
