#include<iostream>
using namespace std;
void unique(int arr[],int size)
{   
    cout<<"unique values = ";
    for(int i=0;i<size;i++)//outter loop
    {
         bool isunique=true;
         
         for(int j=0;j<size;j++)//inner loop
        {
            if(i!=j&&arr[i]==arr[j])//index same nhi hai lekin aur ye bhi pta kr rahe hai ki i ke elements hai wo j ke elements me repeate toh nhi kr rahe hai 
            {                       //aur jo repeat na kare wo isunique ke true me aa jaye aur ham cout kra le
                                    //if we dont use i!=j then we can't find that element in other index kyouki same index me element same hoga
             isunique=false;
            }
        }  
         if(isunique)
        {
            cout<<arr[i]<<","<<" ";
        }     
    }    
     cout<<endl; 
}
int main()
{
    int arr[]={1,2,3,7,1,2,3,5,5};
    int size=9;
    unique(arr,size);
}