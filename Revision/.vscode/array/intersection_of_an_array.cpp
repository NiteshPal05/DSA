#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of arrays : ";
    cin >> size;
    cout << "Enter the elements of an 1st array: ";
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of an 2nd array: ";
    int arr2[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    intersection(arr1, arr2, size);
}