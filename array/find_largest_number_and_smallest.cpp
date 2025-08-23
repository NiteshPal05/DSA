#include<iostream>
using namespace std;
int main()
{
   int num,ans;
   int largest=INT_MIN;//compare with -infinity
   int smallest=INT_MAX;//compare with +infinity
   cout<<"enter your number: ";
   cin>>num;
   while(num>0)
   {
    int rem =num%10;
        ans=rem;
       largest = max(ans,largest);
       smallest = min(ans,smallest);
        num=num/10;
   }
   cout<<"largest number is = "<<largest<<endl;
   cout<<"smallest number is = "<<smallest<<endl;

}