#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec, int target)//we can use vector<int> as a calling function instead of int and void
{
    vector<int>ans;
    int size=vec.size();
    for(int i=0;i<size;i++)//i and j show index numbers
    {
        for(int j=(i+1);j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
            if(vec[i]+vec[j]+vec[k]==target)
            {
              ans.push_back(i);//jo bhi index ayi use new vector me push back karke return kra liya 
              ans.push_back(j);
              ans.push_back(k);
              return ans;//return index values
            }
            }
        }
    } 
    return ans; 
}
int main()
{
    
    vector<int>vec={2,7,3,4,5,6,7};
    int target = 19;
    vector<int>ans = pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<","<<ans[2]<<endl;
    
}//time compexity = O(n^3)