#include<iostream>
#include<queue> // FIFO -> first-input first-output
using namespace std;
int main()
{
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"first element of the queue : "<<q.front()<<endl;

    cout<<"Elements of the queue : ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"after poping all the elements size of queue : "<<q.size()<<endl;
}