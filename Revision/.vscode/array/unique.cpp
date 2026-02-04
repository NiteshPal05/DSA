#include<iostream>
using namespace std;
void unique(int arr[],int size)
{
    
    for(int i=0;i<size;i++)
    {
        bool isunique = true;
        for(int j=0;j<size;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                isunique = false; 
                break;
            }
        }
        if(isunique)
        {
            cout<<arr[i]<<" ";
            
        }
      
    }
}
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    cout << "Enetr the elements of an array: ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    unique(arr,size);
}