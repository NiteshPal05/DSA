#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>&vec)//pass by reference 
{
    int n = vec.size();
    for(int value:vec)//(time complexity = O(n^2))
    {
        int frequency=0;
        for(int element:vec)
        {
            if(value==element)
            {
                frequency++;
            }
        }
        if(frequency>n/2)
        {
         return value;
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
   cout<<"majority element: "<<majorityelement(vec)<<endl;
}
