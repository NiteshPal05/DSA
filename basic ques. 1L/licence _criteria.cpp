#include<iostream>
using namespace std;
int main()
{
    int age;//by ternary operator
    cout<<"enter your age: ";
    cin>>age;
    string a =(age>18)?"eligible":"not eligible";
    cout<<"you are :"<<a<<endl;
   
}
/*if(age>18)
{
cout<<"eligible";
}
else
{
cout<<"not eligible";
}
*/
