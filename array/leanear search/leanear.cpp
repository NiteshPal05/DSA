#include<iostream>
using namespace std;
int main()
{   int i;
    int arr[]={1,9,8,5,5,50};
    int target = 500;
    for( i=0;i<6;i++)
    {
        if(arr[i]==target)
        {
            cout<<"index no. = "<<i<<endl;
            break;
           
        } 
    }
    if(target!=arr[i])
        {
            cout<<"-1"<<endl;//-1 means not found in array 
            
        }
    
    
    

}