#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int* ptr = &a;
    cout<<"ptr value = "<<ptr<<endl;           // store memory address of variable a
    cout<<"address of a = "<<&a<<endl;         // real address of variable a
    cout<<"address of pointer = "<<&ptr<<endl; // address of pointer 


    float b = 19.7;
    float *ptr1 = &b;
    cout<<ptr1<<endl;
    cout<<&b<<endl;
    cout<<&ptr1<<endl;
}