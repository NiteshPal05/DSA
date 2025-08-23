#include<iostream>
using namespace std;
int sumofdigit(int n)
{  int sum=0;
    while(n>0)//loop jab tak daale hue no. chalenge
    {
    int lastdigit = n%10;//find last digit
    n/=10;//shift the no. (if n is in float value then this concept will we incorrect) 
     sum+=lastdigit;//for more look at hf.cpp file
    }
    return sum;
}
int main()
{
    
cout<<sumofdigit(44455)<<endl;
cout<<sumofdigit(12345)<<endl;
}