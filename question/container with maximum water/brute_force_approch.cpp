#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int input;
    cout<<"enter the height of the container(press -1 for exit): ";
    vector<int>height;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        height.push_back(input);
    }
    int maxwater=0;
    for(int i=0;i<height.size();i++)//time ccomplexity = O(n^2)
    {
        for(int j=(i+1);j<height.size();j++)
        {
            int ht = min(height[i],height[j]);//we need minimum height for area
            int width = j-i;
            int area = ht*width;
            maxwater= max(maxwater,area);
        }
    }
    cout<<"container with most water = "<<maxwater<<endl;
}