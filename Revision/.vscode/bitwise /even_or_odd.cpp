#include<iostream>
using namespace std;
int main()
{
    cout<<"enter you no. : ";
    int n;
    cin>>n;
    if(n>0 && (n&1)==0) // ex -> 5 -> 101 & 1 => 110 which is not equa to 0 
                        // ex-> 4 -> 100 & 1 => 000
                        // ex -> 10 -> 1010 & 1 => 0000 
    {
      cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
}