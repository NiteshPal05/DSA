#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int input;
    cout<<"push the elements into the vector/(enter -1 to stop): ";
    while(true)
    {
        cin>>input;
        if(input == -1)
        {
        break;
        }
        vec.push_back(input);
    }
    cout<<endl;
    cout<<"elements are: ";
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;
}