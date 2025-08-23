#include<iostream>
#include<vector>
using namespace std;
vector<int> productexceptitself(vector<int>vec)//time complexity = O(3n)-> 3 is constant = O(n)
                                               
{
    int size = vec.size();
    vector<int>ans(size,1);
    for(int i=1;i<size;i++)
    {
        ans[i]=ans[i-1]*vec[i-1];
    }
    int suffix=1;
    for(int j=size-2;j>=0;j--)// j is started from end so ( j = size -1) and (j=size-2)
    {
     suffix*=vec[j+1];
     ans[j]*=suffix;   
    }
    return ans;
}
int main()
{
    int input;
    vector<int>vec;
    cout<<"enter thr number (press -1 for exit): ";
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        vec.push_back(input);
    }
     vector<int>ans = productexceptitself(vec);
     for(int value: ans)
     {
        cout<<value<<" ";
     }
     cout<<endl;

}