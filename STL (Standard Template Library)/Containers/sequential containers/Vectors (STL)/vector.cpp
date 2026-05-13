# include<iostream>
# include<vector>
using namespace std;
int main()
{
    // ways to create vector :- 
    vector<int>vec1;
    vector<int>vec2 = {1,2,3,4,5}; 
    vector<int>vec3(vec2); // insert 'vec2' into 'vec3'
    vector<int>vec4(3,10); // (size , element)
    
    cout<<"vec1 (empty) = ";
    for(int val : vec1)    // <- For each loop 
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"vec2 = ";
    for(int val : vec2)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"vec3 = ";
    for(int val : vec3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"vec4 = ";
    for(int val : vec4)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}


/* 
Note :- 
-> Vector : 1. Dynamic in Nature  2. Increase the size on the runtime
 */
