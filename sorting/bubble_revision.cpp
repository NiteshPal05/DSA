// # include<iostream>
// # include<vector>
// using namespace std;
// void bubble(vector<int>&vec)
// {
//     for(int i=0;i<vec.size();i++)
//     {
//         for(int j=0;j<vec.size()-i-1;j++)
//         {
//             if(vec[j]>vec[j+1])
//             {
//                 swap(vec[j],vec[j+1]);
//             }
//         }
//     }
// }
// void printarray(vector<int>vec)
// {
//     for(int val : vec)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     vector<int>vec;
//     int el;
//     cout<<"Enter the elemnts of an array (press -1 for exit ) : ";
//     while (true)
//     {
//         cin>>el;
//         if(el == -1)
//         {
//             break;
//         }
//         vec.push_back(el);
//     }
//     bubble(vec);
//     printarray(vec);
// }


// Better version 

// # include<iostream>
// using namespace std;

// void bubble(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         bool isswap = false;      // <- use to avoid extra checks 
//         for(int j=0;j<size-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 isswap = true;
//             }
//         }
//         if(!isswap)
//         {
//             return ;
//         }
//     }
// }
// void printarray(int arr[],int size)
// {
//     for(int i =0 ;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int size;
//     cout<<"Enter the size of an array : ";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the elements of an array : ";
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     bubble(arr,size);
//     printarray(arr,size);
// }