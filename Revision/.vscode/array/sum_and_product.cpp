#include<iostream>
using namespace std;
void sum_product(int arr[],int size)
{
    int sum=0,product=1;
    for(int i=0;i<size;i++)
    {
        product *= arr[i];
        sum += arr[i];
    }
    cout<<"product = "<<product<<endl;
    cout<<"sum = "<<sum<<endl;


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
   sum_product(arr,size);
}