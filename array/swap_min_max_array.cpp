#include<iostream>
using namespace std;
void maxandmin(int arr[],int size)
{
    int maximum=0,minimum=0;
    int smallest = INT_MAX; // + infinity
    int largest = INT_MIN;  // - infinity
     for(int i=0;i<size;i++)
     {
        smallest = min(arr[i],smallest);
        
        largest = max(arr[i],largest);
        
         
     }
     cout<<"smallest array element = "<<smallest<<endl;
     cout<<"largest array element = "<<largest<<endl; 
     cout<<"after sawpping elements:- ";
     
     //swap nhi hua ??
     
     
     
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
