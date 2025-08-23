#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>&vec)//pass by reference 
{
    int frequency = 1,ans = vec[0];//(time complexity = O(nlogn+n)~O(nlogn))
    int n = vec.size();
    sort(vec.begin(),vec.end());//sorting (arrange vector in ascending order)(time complexity = O(nlogn))
    for(int i=1;i<n;i++)// this logic also not solve this example -> {1,1,2,2,3,3,3} , n/2 = 3 and frequrncy also 3;
    {
        if(vec[i]==vec[i-1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans =vec[i];
        }
        if(frequency>n/2)
        {
            return ans;
        }
    }
    return -1;
}
int main()
{
    int input;int ans;
    vector<int>vec;
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
   cout<<"majority element of an vector = "<<majorityelement(vec)<<endl;
}
