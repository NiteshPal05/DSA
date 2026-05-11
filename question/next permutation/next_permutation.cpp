# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;
// & -> this is pass by refrence symbol of alias not pointer/address
void permutation(vector<int>&vec) // T.C -> O(n) and S.C -> O(n)
{
    int n = vec.size();


    // step 1: find pivot
    int pivot = -1;
    for(int i=n-2;i>=0;i--) // T.C -> O(n)
    {
        if(vec[i]<vec[i+1])
        {
            pivot = i;
            break;
        }
    }

    // if pivot not found then simply reverse the array
    if(pivot == -1)
    {
        reverse(vec.begin(),vec.end());
        return;
    }


    // step 2 : find right most(just greator then vec[pivot]) and swap with pivot
    for(int i=n-1;i>pivot;i--) // T.C -> O(n)
    {
        if(vec[i]>vec[pivot])
        {
            swap(vec[i],vec[pivot]);
            break;
        }
    }

    // step 3 : reverse all the elements after pivot using two pointer approach becuz all are in decreasing order 
    int a = pivot+1;
    int b = n-1;
    while(a<=b)
    {
        swap(vec[a],vec[b]);
        a++;
        b--;
    }
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
    while(cin>>n && n!=-1)
    {
        vec.push_back(n);
    }
    permutation(vec);
    cout<<"Next permutation : ";
    print_array(vec);

}