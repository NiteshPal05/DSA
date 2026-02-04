// #include <iostream>
// #include <vector>
// using namespace std;
// // vector<int> product(vector<int> &vec,int n)
// vector<int> product(vector<int> &vec)

// {
//     int n = vec.size();
//      vector<int>ans(n,1);  // size and value already defined
//     // vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         // int produc = 1;
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j)
//             {
//                 ans[i]*=vec[j];
//                 // produc *= vec[j];
//             }
//         }
//         // ans.push_back(produc);
//     }
//     return ans;
// }
// int main()
// {
//     // cout<<"Enter the size of the vector: ";
//     int n;
//     // cin>>n;
//     vector<int> vec;
//     cout << "Enter the elements of an vector : ";
//     while (true)
//     {
//         cin >> n;
//         if (n == -1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
// //    int a;
// //    for(int i=0;i<n;i++)
// //    {
// //       cin>>a;
// //     vec.push_back(a);
// //    }
//     // vector<int> ans = product(vec,n);
//         vector<int> ans = product(vec);

//     cout << "answer = ";
//     for (int value : ans)
//     {
//         cout << value << " ";
//     }
//     cout<<endl;
// }


// // optimized approach 
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> product(vector<int>vec)
// {
//     int n = vec.size();
//     vector<int>ans(n,1);
//     vector<int>preffix(n,1);
//     vector<int>suffix(n,1);
//     for(int i=1;i<n;i++) //preffix
//     {
//         preffix[i] = preffix[i-1]*vec[i-1];
//     }
//     for(int i=n-2;i>=0;i--) //suffix
//     {
//         suffix[i] = suffix[i+1]*vec[i+1];
//     }
//     for(int i=0;i<n;i++)
//     {
//         ans[i] = preffix[i]*suffix[i];
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout << "Enter the elements of an vector : ";
//     while (true)
//     {
//         cin >> n;
//         if (n == -1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//         vector<int> ans = product(vec);

//     cout << "answer = ";
//     for (int value : ans)
//     {
//         cout << value << " ";
//     }
//     cout<<endl;
// }

//more optimized approach  for space complexity
#include<iostream>
#include<vector>
using namespace std;
vector<int> product(vector<int>vec)
{
    int n = vec.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++) //preffix
    {
        ans[i] = ans[i-1]*vec[i-1];
    }int suffix=1;
    for(int i=n-2;i>=0;i--) //suffix
    {
        suffix*=vec[i+1];
        ans[i]*=suffix;
    }
    return ans;
}
int main()
{
    int n;
    vector<int> vec;
    cout << "Enter the elements of an vector : ";
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
        vector<int> ans = product(vec);

    cout << "answer = ";
    for (int value : ans)
    {
        cout << value << " ";
    }
    cout<<endl;
}
