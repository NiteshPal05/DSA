// #include<iostream>
// using namespace std;
// void reverse(int size, int arr[])
// {
//     int start = 0;
//     int end = size-1;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
   
// }
// int main()
// {
//     int size;
//     cout<<"Enter the size of an array : ";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the elements of an array: ";
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     reverse(size,arr);
//     cout<<"reverse of an array : ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


#include<iostream>
using namespace std;
int reverse(int size, int arr[])
{
    
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
   return 0; 
}
int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"reverse = ";
    reverse(size,arr);
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<< endl;

}
   