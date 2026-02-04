#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>vec1,int a,vector<int>vec2,int b) //T.C. => O(m+n)
{

    int idx = a+b-1 ;
    int i = a-1;
    int j = b-1;

    while(i>=0 && j>=0)
    {
        if(vec1[i]>=vec2[j])
        {
            vec1[idx--] = vec1[i--];
        }
        else
        {
            vec1[idx--] = vec2[j--];   
        }
    }
    // if i<0
    while(j>=0)
    {
        vec1[idx--] = vec2[j--];
    }

    for (int val : vec1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
   int n,m;
   vector<int>vec1;
   vector<int>vec2;
   cout<<"Enter the elements of an 1st array : ";
   while(true)
   {
    cin>>n;
    if(n==-1)
    {
        break;
    }
    vec1.push_back(n);
   }

   cout<<"Enter the elements of an 2nd array: ";
   while(true)
   {
    cin>>m;
    if(m==-1)
    {
        break;
    }
    vec2.push_back(m);
   }
   for(int i=0;i<vec2.size();i++){ // we use this loop for extra space using 0 
   vec1.push_back(0);
   }
   int a =vec1.size() - vec2.size();
   int b =vec2.size();
   merge(vec1,a,vec2,b);
}