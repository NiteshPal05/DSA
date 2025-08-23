#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
   vector<int>vec;
   int input;
   cout<<"enter elements of an vector(press -1 for exit): ";
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
   cout<<"size = "<<size<<endl;
   int target;
   cout<<"enter your target: ";
   cin>>target;
   cout<<"index number : ";
   for(int i=0;i<size;i++)
   {
    if(vec[i]==target)
    {
        cout<<i<<endl;
        break;
    }
   }
   cout<<"-1/not found"<<endl;
   
}