//brute force approach 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sorting(vector<int>vec)
// {
//     sort(vec.begin(),vec.end()); //O(nlogn)
//     for(int i=0;i<vec.size();i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the elementes of an vectors in 0s,1s,2s(and press -1 for exit): ";
//     while(true)
//     {
//         cin>>n;
//         if(n==-1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     sorting(vec);
// }


//optimized approach 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sorting(vector<int>vec) // T.C. -> O(4n) -> ignore contant -> O(n)
// {
//     int count0 = 0, count1=0, count2=0;
//     for(int i=0;i<vec.size();i++) 
//     {
//         if(vec[i] == 0)
//         {
//             count0++;
//         }
//         else if(vec[i] == 1)
//         {
//             count1++;
//         }
//         else // for (count2==2)
//         {
//             count2++;
//         }
//     }
//     int idx =0;
//     for(int i=0;i<count0;i++) 
//     {
//         vec[idx++]=0;
//     }
//     for(int i=0;i<count1;i++)
//     {
//         vec[idx++]=1;
//     }
//     for(int i=0;i<count2;i++)
//     {
//         vec[idx++]=2;
//     }



//     for(int i=0;i<vec.size();i++)
//     {
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the elementes of an vectors in 0s,1s,2s(and press -1 for exit): ";
//     while(true)
//     {
//         cin>>n;
//         if(n==-1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     sorting(vec);
// }

// most optimized approach -> Dutch national flag algorithm (dnfa)
// also 3 pointer approach -> low,mid,high
#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>vec) // T.C. -> O(4n) -> ignore contant -> O(n)
{
    int mid = 0 , low = 0 , high = vec.size()-1;
    while ((mid<=high))
    {
        if(vec[mid]==0)
        {
            swap(vec[low],vec[mid]);
            low++,mid++;
        }
        else if(vec[mid]==1)
        {
            mid++;
        }
        else // (vec[mid]==2)
        {
            swap(vec[high],vec[mid]);
            high--;
        }
    }
     for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector<int>vec;
    int n;
    cout<<"Enter the elementes of an vectors in 0s,1s,2s(and press -1 for exit): ";
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        vec.push_back(n);
    }
    sorting(vec);

}
