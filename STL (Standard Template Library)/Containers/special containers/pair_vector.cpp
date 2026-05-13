#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<pair<int,int>>vec = {{1,2},{3,4},{5,6},{7,8}};

    for(pair<int,int> p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    // insert pairs in vec 

    vec.push_back({9,10}); // created object insert at the time of insertion.
    vec.emplace_back(11,12); // in-place object (ex - pair) create at the time of insertion .

    cout<<"pairs after insertion :- "<<endl;
    for(auto p : vec) // <- auto keyword use 
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}