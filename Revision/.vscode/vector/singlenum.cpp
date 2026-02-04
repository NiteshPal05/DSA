#include<iostream>
#include<vector>
using namespace std;
int singlenum(vector<int>&vec) // one no. is single other are twice .. ex -> 4 2 1 2 1
{
    int ans = 0;
    for(int value: vec)
    {
         ans ^= value;
    }
    return ans;
}
int main()
{
    int n;
    vector<int>vec;
    cout<<"Enter the elements of an vector : ";
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
         vec.push_back(n);
    }
    cout<<"capacity = "<<vec.capacity()<<endl;
    cout<<"unique single no.(one no. is single other are twice )= "<<singlenum(vec)<<endl;
    
}
