#include<iostream>
#include<vector>
using namespace std;
void find_unique(vector<int>&num,int size)//pass by reference
{
  cout<<"unique elements are: ";
  for(int i=0;i<size;i++)
  {
    bool isunique=true;//whole condition is true
    for(int j=0;j<size;j++)
    {
      if(i!=j&&num[i]==num[j])//index same nhi hai lekin elements same honge tab is unique false ke equal hoga
      {
        isunique=false;
      }
    }
    if(isunique==true)//or if(isunique) already true in outter loop
    {
      cout<<num[i]<<" ";
    }
  }
  cout<<endl;  
}
int main()
{
    int size;
    cout<<"enter size of the vector: ";
    cin>>size;
    vector<int>num;
    cout<<"enter elements: ";
    int n;
    for(int i=0;i<size;i++)
    {
      cin>>n;
      num.push_back(n);
    }
    cout<<"your elements are: ";
    for(int val:num)
    {
      cout<<val<<" ";
    }
    cout<<endl;
    find_unique(num,size);
}