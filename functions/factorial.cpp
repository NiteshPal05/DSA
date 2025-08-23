#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);//function call itself
                                // again-again also called recursion
    }
    return 0;
}
int main()
    {
        /*int num;
        cin>>num;
        cout<<factorial(num)<<endl;*/
        cout<<factorial(5)<<endl;
        cout<<factorial(4)<<endl;
        cout<<factorial(3)<<endl;
        cout<<factorial(2)<<endl;
        cout<<factorial(1)<<endl;
        cout<<factorial(1)<<endl;
    }
