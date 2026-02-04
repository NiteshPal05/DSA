#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>vec,int target)
{
    int start = 0;
    int end = vec.size() - 1;
    while(start<=end)
    {
       int  mid = start + (end-start)/2;
       if(target == vec[mid])
       {
        return mid;
       }
       if(vec[start]<=vec[mid]) // find left sort or right sort -> this is for left sort 
       {
          if(vec[start]<=target && target<=vec[mid]) // run binary search
          {
            end = mid-1;
          }
          else
          {
            start = mid + 1;
          }
       }
       else // this is for right sort
       {
        if(vec[mid]<=target && target<=vec[end]) // run binary search
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
       }
    }
    return -1;
}
int main()
{
    int n;
    vector<int>vec;
    cout<<"Enter the elements of an vector: ";
    while(true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    int target;
    cout<<"Enter your target value: ";
    cin>>target;
    cout<<"target value at index after sorting = "<<search(vec,target)<<endl;
}