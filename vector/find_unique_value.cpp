#include<iostream>
#include<vector>
using namespace std;
int find_single_unique(vector<int>&num)//pass by reference(&)
{
    int ans =0;
    for(int value:num)
    {
      ans^=value;//xor all the value example 0^4^1^2^1^2 or ans = ans^value
    }
    return ans;
}
int main()
{
    vector<int>num;
    int input;
    cout<<"enter the elements (press -1 to stop): ";
    while(true)
    {
        cin>>input;
        if(input == -1)
        {
            break;
        }
        num.push_back(input);
    }
    cout<<"your elements are ";
    for(int values:num)
    {
       cout<<values<<" ";
    }
    cout<<endl;
    cout<<"size = "<<num.size()<<endl;
    cout<<"capacity = "<<num.capacity()<<endl;
    cout<<"unique element = "<<find_single_unique(num)<<endl;
    /* if we put example like this {1,1,2,2,3,3,4,5,6}
       then unique elemnts = 4,5,6 but function xor(^) all this values
       0^4^5^6 = 7;
       then compiler return 7 
    */
}