#include<iostream>
#include<stack> // LIFO -> last-input first-output
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"top el of the stack : "<<s.top()<<endl;
    s.pop();
    cout<<"pop the top el of the stack then top el : "<<s.top()<<endl;

    cout<<"print all the element of stack : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    cout<<"stack is empty or not : "<<s.empty()<<endl;

    // swapping two stacke

    stack<int>s1;

    s1.emplace(1);
    s1.emplace(2);
    s1.emplace(3);
    s1.emplace(4);
    s1.emplace(5);

    stack<int>s2;

    swap(s1,s2);

    cout<<"after swapping the size of both the stacks :- "<<endl;
    cout<<"s1 size : "<<s1.size()<<endl;
    cout<<"s2 size : "<<s2.size()<<endl;

    cout<<"s2-stack elements : ";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;

    cout<<"After pop all the elements from the stack s2 the size of stack : "<<s2.size()<<endl;
}