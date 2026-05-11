# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
// & -> this is pass by refrence symbol of alias not pointer/address
void permutation(vector<int>&vec) // T.C -> O(n) and S.C -> O(n)
{
    next_permutation(vec.begin(),vec.end());
}
void print_array(vector<int>vec)
{
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>vec;
    int n;
    cout<<"Enter the elements of an array to next permutation( press -1 for exit) : ";
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        vec.push_back(n);
    }
    permutation(vec);
    print_array(vec);

}