#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> vec;
int a;
cout<<"Enter the elements of an vector (press -1 for exit): ";
while(true) // we can also use for loop with declaration of size 
{
    cin>>a;
    if(a == -1)
    {
        break;
    }
    vec.push_back(a);
   
   
}
for(int value: vec)
{
    cout<<value<<" ";
}
cout<<"Capacity = "<<vec.capacity()<<endl;

cout<<"Size = "<<vec.size()<<endl;
// cout<<vec.at(2)<<endl;
cout<<"index = "<<vec[3]<<endl;
vec.pop_back();

for(int value: vec)
{
    cout<<value<<endl;
}
cout<<vec.front()<<endl;
cout<<vec.back()<<endl;

}
