#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no. :";
    cin>>num;
 
    switch (num % 2 == 0)
    {
        case true:
        cout<<"even"<<endl;
        break;
        

        case false:
        cout<<"odd"<<endl;
        break;
        
        default :
        cout<<"Enter the valid no. ";
        
    }
}