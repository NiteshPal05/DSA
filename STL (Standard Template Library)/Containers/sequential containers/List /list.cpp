#include <iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l = {1,2,3,4,5,6};

    cout<<"list elements : ";
    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    list<int>l1;
    // perform operations :- 
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_front(0);

    cout<<"l1 elements : ";
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l1.pop_back();
    l1.pop_front();

    cout<<"after pop function : ";
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l1.emplace_back(5);
    l1.emplace_front(0);

    cout<<"After emplace function :";
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list : "<<l1.size()<<endl;
    
    // Important :- (diff btw list and deque )
    // cout<<"element at index 1 of list-1   : "<<l1[1]<<endl; // random access not possible  



   // int a[4] = {1,2,3,4} ;
    // cout<<"size of array : "<<sizeof(a)/sizeof(int)<<endl; 

}