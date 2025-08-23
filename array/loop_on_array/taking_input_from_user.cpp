#include<iostream>
using namespace std;
int main()
{   int size=5;
    int marks[size];
    cout<<"size of an array = "<<sizeof(marks)<<endl;//4bytes*5->20bytes
    //size of array means box or block
    cout<<"no. of boxes/no. of index = "<<sizeof(marks)/sizeof(int)<<endl;
    for(int i=0;i<size;i++)// taking array elements from user using loop
    {
        cin>>marks[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;;
    }
    
}
