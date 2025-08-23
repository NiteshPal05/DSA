#include<iostream>
using namespace std;
void sumandproduct(int arr[],int size)
{   
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<product<<endl;

     
}
int main()
{   int size;
    cout<<"enter your size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"enter your array elements: ";
    for(int i=0;i<size;i++)//taking input from user using loop
    {
        cin>>arr[i];
    }
    sumandproduct(arr,size);
   
}