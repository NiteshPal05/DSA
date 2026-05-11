# include<iostream>
# include<vector>
using namespace std;
int main()
{
    // vector functions :-
    vector<int>vec;

    cout<<"size of vec : "<<vec.size()<<endl; // find the sz of vec

    vec.push_back(1);  // <- insert a elements in a vec from the last 
    vec.push_back(2);
    vec.push_back(3);

    cout<<"After insert a elements using push_back function : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Capacity of vector : "<<vec.capacity()<<endl; // <- use to find the capacity of a vector 
    cout<<"size of vec : "<<vec.size()<<endl;

    vec.pop_back();   // <- pop the elemnet form the last in a vec

    cout<<"After using pop_back function : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    vec.emplace_back(4); // similar to push_back function 

    cout<<"After using emplace_back function : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"at function :  "<<vec.at(0)<<endl; // find the element at a particular index
    cout<<"indexing : "<<vec[2]<<endl;    // find the element at a particular index

    cout<<"Front function : "<<vec.front()<<endl; // find the first el of vec
    cout<<"back function : "<<vec.back()<<endl; // find the last el of vec
}
