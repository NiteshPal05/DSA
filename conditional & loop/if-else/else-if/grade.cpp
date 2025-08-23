#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks: ";
    cin>>marks;
    if(marks>90)
    {
        cout<<"grade : A";
    }
    else if(marks>75&&marks<90)
    {
        cout<<"grade : B";
    }
    else if(marks>50&&marks<75)
    {
        cout<<"grade : c";
    }
    else
    {
        cout<<"fail";
    }
}