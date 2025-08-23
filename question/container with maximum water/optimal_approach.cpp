#include<iostream>
#include<vector>
using namespace std;
int maxcontainer(vector<int>height)//time complexity = O(n)
{
    int start = 0;
    int end = height.size()-1;
    int maxwater = 0;
    while(start<end)
    {
        int ht = min(height[start],height[end]);
        int width = end-start;
        int area = ht*width;
        maxwater = max(maxwater,area);
        if(height[start]<height[end])//or ternarry operator = height[satrt]<height[end]?start++:end--;
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return maxwater;
}
int main()
{
    int input;
    vector<int>height;
    cout<<"enter the heights(press -1 for exit): ";
    while(true)
    {
      cin>>input;
      if(input==-1)
      {
        break;
      }
      height.push_back(input);
    }
    cout<<"max container = "<<maxcontainer(height)<<endl;
}