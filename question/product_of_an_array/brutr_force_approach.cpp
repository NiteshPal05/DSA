#include<iostream>
#include<vector>
using namespace std;
vector<int> productexceptitself(vector<int>vec)//time complexity = O(n^2)
{
    int size = vec.size();
    vector<int>ans(size,1);
    for(int i =0 ; i<size;i++)
    {
        for(int j=0 ; j<size;j++)
        {
          if(i!=j)
          {
            ans[i]*=vec[j];
          } 
        }
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