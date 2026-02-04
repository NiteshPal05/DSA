#include <iostream>
using namespace std;
int max_subarray_sum(int arr[], int size)
{
    int max_sum = INT_MIN;
    int cur_sum = 0;
    for (int i = 0; i < size; i++) // TC - O(n)
    {
        cur_sum += arr[i];
        max_sum = max(cur_sum, max_sum);
        if (cur_sum < 0)
        {
            cur_sum = 0;
        }
    }
    return max_sum;
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
    cout << "maximum subarrray sum = " << max_subarray_sum(arr, size) << endl;
}