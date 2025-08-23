#include<iostream>
#include<vector>
using namespace std;
int stock(vector<int>vec)
{
    int maxprofit=0;
    int bestbuy=vec[0];
    for(int i=1;i<vec.size();i++)
    {
       if(vec[i]>bestbuy)
       {
       maxprofit=max(maxprofit,vec[i]-bestbuy);
       }
        bestbuy =min(bestbuy,vec[i]);
    }
    return maxprofit;
}
int main()
{
    int input;
    vector<int>vec;
    cout<<"enter the prices(press -1 for exit): ";
    while(true)
    {
      cin>>input;
      if(input==-1)
      {
        break;
      }
      vec.push_back(input);
    }
    cout<<"maximum profit = "<<stock(vec)<<endl;
}