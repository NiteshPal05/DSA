#include<iostream>
using namespace std;
int majorityelement(int arr[],int size)//(time complexity = O(n^2))
{
  for(int i=0;i<size;i++)
  {
    int frequency =0;
    for(int j=0;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            frequency++;
        }
    }
    if(frequency>size/2)
    {
        return arr[i];
    }
}
return -1;
}
int main()
{
    int size;
    cout<<"enter the size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of an arrat: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   cout<<"majorityelement = "<<majorityelement(arr,size)<<endl;

}