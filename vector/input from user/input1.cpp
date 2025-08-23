#include<iostream>
#include<vector>
using namespace std;
int main()
{   int size;
    cout<<"enter the size of the vector: ";
    cin>>size;
    vector<int>vec(size);// we can't use this 'int size = vec.size();' because elements daalne se pehele size kaise definr ho sakta hai agar baad me use karte hai toh loop ki conditions kaise fullfill karoge 
    cout<<"enter the elements of the vector: ";
    for(int i=0;i<size;i++)
    {
      cin>>vec[i];
    }
    cout<<"elements are: ";
    for(int value:vec)//or for(int i=0;i<size;i++)
    {
        cout<<value<<" ";// or cout<<vec[i]<<" ";
    }
    cout<<endl;


}