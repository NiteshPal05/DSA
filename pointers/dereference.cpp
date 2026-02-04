#include<iostream>
using namespace std;
int main()
{
    int a = 10 ;
    int* ptr = &a;
    int** parptr = &ptr; //pointer to pointer
    cout<<parptr<<endl;
    cout<<*(ptr)<<endl;
    cout<<&(ptr)<<endl;
    cout<<**(parptr)<<endl;

    //NULL pointer 
    int* ptr1= NULL;
    int** ptr2;      
    cout<<(ptr1)<<endl;// not showing garbage value
    cout<<(ptr2)<<endl;// show garbage value 

    

}