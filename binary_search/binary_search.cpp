#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>vec,int target) // T.C = O(logn)
{
   sort(vec.begin(),vec.end());
   int  start = 0;
   int  end = vec.size() - 1;
   while(start<=end) // we take <= for worst situation like -> (end = mid = start)
   {
    //  int mid = (start+end)/2; 
     // for delay overflow in mid we use optimized 
     int mid = start + (end-start)/2;
     if(target > vec[mid]) 
     {
        start = mid + 1; // 2nd half of array
     }
     else if(target<vec[mid])
     {
        end = mid - 1; // 1st half of array
     }
     else // target == vec[mid]
     {
       return mid ; 
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