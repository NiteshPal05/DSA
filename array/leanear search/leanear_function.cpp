#include<iostream>
using namespace std;
int  search(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;//valid index no. or target founded
        }
    }
    return -1;//means target not found or  not valid 
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size =7;
    int target=5;
    cout<<"index no.= "<<search(arr,size,target)<<endl;
    
}