// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairsum(vector<int>&vec,int target)
// {
//     vector<int> ans;
//     int size = vec.size();
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(vec[i]+vec[j]==target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout<<"Enter the elements of an vector: ";
//     while(true)
//     {
//         cin>>n;
//         if(n==-1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     cout<<"Enter your target value: ";
//     int target;
//     cin>>target;
//     vector<int>ans = pairsum(vec,target);
//     cout<<ans[0]<<" , "<<ans[1]<<endl;
//     // for(int val: ans)
//     // {
//     //     cout<<val<<",";
//     // }
//     // cout<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void pairsum(vector<int>&vec,int target)
// {
    
//     int size = vec.size();
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(vec[i]+vec[j]==target)
//             {
//                 cout<<i<<" , "<<j<<endl;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout<<"Enter the elements of an vector: ";
//     while(true)
//     {
//         cin>>n;
//         if(n==-1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     cout<<"Enter your target value: ";
//     int target;
//     cin>>target;
//     pairsum(vec,target);
// }
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>&vec,int target)
{
    vector<int>ans;
    int size = vec.size();
    int start = 0, end =size-1;
    int pairsum = 0;
   while(start<end)
    {
        pairsum = vec[start]+vec[end];
        if(target >pairsum)
        {
            start++;
        }
        else if(target <pairsum)
        {
            end--;
        }
        else // target == pairsum
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        
    }
    return ans;
}
int main()
{
    int n;
    vector<int> vec;
    cout<<"Enter the elements of an vector: ";
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        vec.push_back(n);
    }
    cout<<"Enter your target value: ";
    int target;
    cin>>target;
    vector<int>ans = pairsum(vec,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    // for(int val: ans)
    // {
    //     cout<<val<<",";
    // }
    // cout<<endl;
}


