#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d = {1,2,3,4,5};
    cout<<"deque elements : ";
    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    deque<int>d1;
    // perform operations :- 
    d1.push_back(3);
    d1.push_back(4);
    d1.push_back(5);
    d1.push_front(2);
    d1.push_front(1);
    d1.push_front(0);

    cout<<"d1 elements : ";
    for(int i : d1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d1.pop_back();
    d1.pop_front();

    cout<<"after pop function : ";
    for(int i : d1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d1.emplace_back(5);
    d1.emplace_front(0);

    cout<<"After emplace function :";
    for(int i : d1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of deque : "<<d1.size()<<endl;

    cout<<"access the element at index 1 : "<<d1[1]<<endl; // Random access possible
    cout<<"access the element at index 1 : "<<d1.at(1)<<endl; // Random access possible
}
