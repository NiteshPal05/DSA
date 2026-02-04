#include<iostream>
#include<vector>
using namespace std;
int mountain(vector<int>vec)
{
    int st = 1;   // to avoid unnecessary check in line no. -> 11
    int end = vec.size()-2;
    if(vec.size() == 0)
    {
        return -1;
    }
    if(vec.size() == 1)
    {
        return 1;
    }
    if(vec.size() == 2)
    {
        // if(vec[0]>vec[1])
        // {
        //     return 0;
        // }
        // else
        // {
        //     return 1;
        // }
        return (vec[0]>vec[1])? 0: 1;
    }

    while(st<=end)
    {
       int mid = st + (end-st)/2;
       if(vec[mid-1]<vec[mid] && vec[mid]>vec[mid+1])
       {
        return mid;
       }
       else if(vec[mid]>vec[mid-1]) // left side 
       {
        st = mid+1; // put into right side 
       }
       else  //right side (vec[mid]>vec[mid+1])
       {
       end = mid-1; //put into left side 
       }
    }
return -1;
}
int main()
{
    int n;
    cout<<"Enter the elements of an vector: ";
     vector<int>vec;
    while(true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    cout<<" value at index = "<<mountain(vec)<<endl;
    int index = mountain(vec);
    cout<<vec[index]<<endl;
    return 0;
}

