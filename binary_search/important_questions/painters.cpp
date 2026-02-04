#include <iostream>
using namespace std;
bool ispossible(int arr[],int m,int n, int mat) // mat-> maximum allowed unit/time
{
    int painters = 1 , time = 0 ;
    for(int i=0;i<n;i++) // T.C => O(n)
    {
        if(arr[i]>mat)
        {
            return false;
        }
        if(arr[i]+time<=mat)
        {
            time+=arr[i];
        }
        else // (arr[i]+time > mat)
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <=m ? true:false;
}
int timetopaint(int arr[], int n, int m) // total time complexity => O(log(sum)*n)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0, maxvalue = INT_MIN; // find range we don't use sorted array
    for (int i = 0; i < n; i++) // T.C => O(n)
    {
        sum += arr[i];
        maxvalue = max(maxvalue, arr[i]);
    }
    int st = maxvalue, end = sum, ans = -1;
    while (st <= end) // binary search applied here with range T.C => O(log(sum))
    {
        int mid = st + (end - st) / 2;
        if (ispossible(arr, m, n, mid)) // going left
        {
            ans = mid;
            end = mid - 1;
        }
        else // not possible going right
        {
            st = mid + 1;
        }
    }
    return ans ;
}
int main()
{
    int n ;
    cout<<"Enter the no. of boards: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the units of the boards: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the no. of painters: ";
    int m;
    cin>>m;
    cout<<"minimum time to allow the paint of the boards :"<<timetopaint(arr,n,m)<<endl;
}
