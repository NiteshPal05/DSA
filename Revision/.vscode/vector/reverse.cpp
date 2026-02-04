#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int> &vec,  int size)
{
    int start=0,end = size-1; // 2 pointer approach 
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return 0;
}
int main()
{
    int n;
    vector<int> vec;
    cout << "Enter the elements of an vector(press -1 for exit): ";
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    int target;
    
    int size = vec.size();
    reverse(vec,size);
    cout<<"after swaping  : ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}