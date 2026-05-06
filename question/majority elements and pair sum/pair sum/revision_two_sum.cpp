#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int target)
{
    int i = 0;
    int j = vec.size()-1;
    vector<int>ans;
    while(i<j)
    {
        int p_sum = vec[i]+vec[j];
        if(p_sum > target)
        {
            j--;
        }
        else if(p_sum<target)
        {
            i++;

        }
        else
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
    vector<int>num;
    int n;
    cout<<"Enter the elements of an array : (press -1 for exit ) : ";
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        num.push_back(n);
    }
    cout<<"Enter your target value : ";
    int target;
    cin>>target;
    vector<int>ans = pairsum(num,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
}