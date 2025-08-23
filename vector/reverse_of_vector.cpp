#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&vec,int size)//pass by reference we dont use pass by reference in array by pass by value
{
    int start=0,end=size-1,swapping;
    while(start<=end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout<<endl;
}
int main()
{
/* vector<int>vec={1,2,3,4,5};
   int size=5; */
   vector<int>vec;
   int input;
   cout<<"enter elements of an vector(press -1 to exit): ";
   while(true)
   {
    cin>>input;
    if(input==-1)
    {
        break;
    }
    vec.push_back(input);
   }
   int size = vec.size();
   cout<<"size = "<<size;
   reverse(vec,size); 
   for(int val:vec)
   {
    cout<<val<<" ";
   }
   cout<<endl;
}