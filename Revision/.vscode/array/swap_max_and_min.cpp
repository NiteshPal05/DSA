#include <iostream>
using namespace std;
void swaping(int arr[], int size)
{
    int maximum = INT_MIN; // - infinity
    int minimum = INT_MAX; // + infinity
    int min_index,max_index;
    for (int i = 0; i < size; i++)
    {
       if(arr[i]>maximum) // we can only use if condition not min and max functions 
       {
        maximum = arr[i];
        max_index = i;
       }
       if(arr[i]<minimum)
       {
        minimum = arr[i];
        min_index = i;
       }
    }
    cout<<"minimum no. = "<<minimum<<" and index = "<<min_index<<endl;
    cout<<"maximum no. = "<<maximum<<" and index = "<<max_index<<endl;
    cout << "After swapping the maximum and minimum element of an array: ";
    swap(arr[max_index],arr[min_index]);
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
    cout << "Enetr the elements of an array: ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swaping(arr, size);
}