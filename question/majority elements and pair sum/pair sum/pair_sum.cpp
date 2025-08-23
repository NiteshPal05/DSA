#include<iostream>
#include<vector>
using namespace std;//brute -force approach
vector<int> pairsum(vector<int>vec , int target)
{
    vector<int>ans;
    int size = vec.size();
    for(int i=0;i<size;i++)
    {
        for(int j=(i+1);j<size;j++)
        {
        if(vec[i]+vec[j]==target)
        {
          ans.push_back(i);
          ans.push_back(j);
          return ans;//return index values
        }
        }
    }
    return ans;
}
int main()
{
    vector<int>vec;
    int input;
    cout<<"enter the elements of an vector(press -1 for exit): ";
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        vec.push_back(input);
    }
    cout<<"size = "<<vec.size()<<endl;
    int target;
    cout<<"enter your target: ";
    cin>>target;
    
    vector<int>ans= pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    
}