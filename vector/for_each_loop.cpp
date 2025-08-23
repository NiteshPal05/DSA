#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    for(int i : vec)//i -> not store index value,store value on the index 
    {
       cout<<i<<endl;
    }
    vector<char>vec1={'a','b','c','d','e'};
    for(char i:vec1)
    {
        cout<<i<<endl;
    }
    vector<int>vec2(5,65);
    for(int i: vec2)
    {
        cout<<(char)i<<" ";
           
    }

}