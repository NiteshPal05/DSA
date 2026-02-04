// #include<iostream>
// using namespace std;
// void bubble(int arr[], int size)
// {
//  for(int i=0;i<size-1;i++)
//  {
//     for(int j=0 ; j<(size-i-1); j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//  }
// }
// void printarray(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
// int size;
// cout<<"Enter the size of an array: ";
// cin>>size;
// int arr[size];
// cout<<"Enter the elements of an array: ";
// for(int i=0;i<size;i++)
// {
//     cin>>arr[i];
// }
// bubble(arr,size);
// printarray(arr,size);
// }

#include <iostream>
using namespace std;
void bubble(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1]) //if we change the symbol in main function it will make it descending order
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            return;
        }
    }
}
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubble(arr, size);
    printarray(arr, size);
}