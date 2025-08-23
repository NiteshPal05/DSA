#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"eneter the elements of an vector(press -1 for exit): ";
    vector<int>vec;
    int input;
    while(true)
    {
        cin>>input;
        if(input==-1)
        {
            break;
        }
        vec.push_back(input);
    }
    int n= vec.size();//(time complexity = O(n^2))
    bool ismj=true;
    for(int value:vec)//this logic find majority element with only 2 different elements present in the vector or array
                      // put vec ={1,1,2,2,3,3,3}
                      //n/2=3 and frequency = 3
    {
        int frequency=0;
        for(int elements:vec)
        {
            if(value==elements)
            {
                frequency++;
            }
        }
        if(frequency>n/2)
        {
            ismj=false;
        }
        if(ismj==false)
        {
            cout<<"majority element : "<<value<<endl;
            break;
        }
        
    }
    if(ismj)
    {
        cout<<"-1(not found)"<<endl;
    }
   
}