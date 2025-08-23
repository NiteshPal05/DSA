#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;//empty vector
    cout<<"size of empty vector = "<<vec.size()<<endl;
    cout<<"capacity of empty vector = "<<vec.capacity()<<endl;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    cout<<"after push_back :- "<<endl;
    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;//capacity always be double
}
