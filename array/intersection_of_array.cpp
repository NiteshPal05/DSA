#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int s1,int s2)
{
    cout<<"the intersect elements are: ";
    for(int i=0;i<s1;i++)
    {
        
        for(int j=0;j<s2;j++)//outter loop
        {
            
            if(arr1[i]==arr2[j])//inner loop
            {
             cout<<arr1[i]<<" ";
             break;  
            }
        }
    } 
    cout<<endl;
}
int main()
{
    int s1,s2;
    cout<<"enter the size of 1st array: ";
    cin>>s1;
    cout<<"enter the size of 2nd array: ";
    cin>>s2;
    int arr1[s1],arr2[s2];
    cout<<"enter the elements of first array: ";
    for(int  i=0;i<s1;i++)
    {
       cin>>arr1[i];  
    }
    int j;
    cout<<"enter the elements of second array: ";
    for( j=0;j<s2;j++)
    {
       cin>>arr2[j];
    }
    
    intersection(arr1,arr2,s1,s2);
    
}

