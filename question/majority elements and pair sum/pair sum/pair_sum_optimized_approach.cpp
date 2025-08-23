#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int target)//time complexity = O(n)
{
    vector<int>ans;
    int size =vec.size();
    int i=0;
    int j=size-1;
    while(i<j)//this logic when we have sorted array
    {
      int ps = vec[i]+vec[j];//ps->pair sum
       if(ps>target)
       {
        j--;
       }
       else if(ps<target)
       {
        i++;
       }
       else if(ps==target)
       {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
    }
    return ans;
}
int main()
{
   vector<int>vec;
   cout<<"enter the elements of an vector(press -1 for exit): ";
   while(true)
   {
    int input;
    cin>>input;
    if(input==-1)
    {
        break;
    }
    vec.push_back(input);
   }
   int target;
   cout<<"enter your target: ";
   cin>>target;
   vector<int>ans = pairsum(vec,target);
   cout<<ans[0]<<","<<ans[1]<<endl;
}