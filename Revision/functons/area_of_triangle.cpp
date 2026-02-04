#include<iostream>
using namespace std;
float area(int b,int h)
{
    return (float)1/2*b*h;
    // return b*(1/2)*h;
    // return (1.0/2)*b*h;

}
int main()
{
    cout<<"Enter your height and base of the triangle repectively: ";
    int b,h;
    cin>>b>>h;
    cout<<"area of triangle = "<<area(b,h)<<endl;
}