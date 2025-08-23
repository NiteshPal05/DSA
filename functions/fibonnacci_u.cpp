# include <iostream>
using namespace std;

void fabonacci(int num)
{
    int a =0, b=1,c;
    int sum =0;
    for (int i=0; i<num; i++)
    {
        cout<<a <<" ";
        sum += a;
        int next = a+b;
        a = b;
        b = next;
    }
    cout<<"="<<sum<<endl;
}

int main ()
{
    int num=3;
    
    fabonacci(num);

   
}