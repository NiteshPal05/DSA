# include <iostream>
using namespace std;

int fabonacci(int num)
{
    int a =0, b=1,c;
    int sum =0;
    for (int i=1; i<num; i++)
    {
        
        int next = a+b;
        a = b;
        b = next;
        
    }
    return a;
}   

int main ()
{
    int num=1;
    
    cout<<fabonacci(num)<<endl;

   
}