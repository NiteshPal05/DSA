#include<iostream>
#include<vector>
using namespace std;
int moorevoting(vector<int>vec)//in real world we can use as help to find voting 
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
    return ans;
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