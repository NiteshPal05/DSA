#include<iostream>
#include<vector>
using namespace std;
int moorevoting(vector<int>vec)//if ans does not exit
{      //time complexity = O(n)
    int frequency =0;//for first index
    int ans =0;
    int n= vec.size();
    for(int i=0;i<n;i++)
    {
     if(frequency==0)
     {
        ans = vec[i];
     }   
     if(vec[i]==ans)
     {
        frequency++;
     }
     else
     {
        frequency--;
     }
    }
     int cout=0;
     for(int value:vec)
     {
       if(value==ans)
       {
        cout++;
       }
    }
       if(cout>n/2)//to put this condition not satisfied this ex = {1,1,2,2,3,3,3}
       {
        return ans;
       }
     else
     {
        return -1;
     }
    
  
}
int main()
{
    int input;
    vector<int>vec;
    cout<<"enter the elements of an vector(press -1 for exit): ";
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        vec.push_back(input);
    }
    cout<<"majority elements are: "<<moorevoting(vec)<<endl;
}