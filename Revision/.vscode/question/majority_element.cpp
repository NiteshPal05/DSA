// #include <iostream>
// #include <vector>
// using namespace std;
// int majority_element(vector<int> &vec) // brute force approach and T.C -> O(n^2)
// {
//     int n = vec.size();
//     int ans;

//     for (int val : vec)
//     {
//         int frequency = 0;

//         for (int ele : vec)
//         {
//             if (val == ele)
//             {
//                 frequency++;
//             }
//         }
//         if (frequency > n / 2)
//         {
//             ans = val;
//             return ans;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout << "Enter the elements of an vector: ";
//     while (true)
//     {
//         cin >> n;
//         if (n == -1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     cout << "majority element = " << majority_element(vec) << endl;
// }

// // optimized - approach using sorting
// #include <iostream>
// #include <vector>
// using namespace std;
// int majority_element(vector<int> &vec) //  T.C -> O(nlogn+n)->O(nlogn)
// {
//     sort(vec.begin(),vec.end());// sorting of an array T.C -> O(nlogn)
//     int n = vec.size();
//     int frequency=1,ans = vec[0];
//     for(int i=1;i<n;i++) // i always initial with one becuz of if condition
//     {
//       if(vec[i]==vec[i-1])
//       {
//         frequency++;
//       }
//       else{
//         frequency=1;
//         ans = vec[i];
//       }
//       if(frequency>n/2)
//       {
//         return ans;
//       }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout << "Enter the elements of an vector: ";
//     while (true)
//     {
//         cin >> n;
//         if (n == -1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     cout << "majority element = " << majority_element(vec) << endl;
// }

// // moore voting algorithm
// #include <iostream>
// #include <vector>
// using namespace std;
// int majority_element(vector<int> &vec) //  T.C -> O(nlogn+n)->O(nlogn)
// {
//     int freq =0 , ans =0;
//     int n = vec.size();
//     for(int i=0;i<n;i++) // T.C -> O(n)
//     {
//       if(freq == 0)
//       {
//         ans = vec[i];
//       }
//       if(ans == vec[i])
//       {
//         freq++;
//       }
//       else
//       {
//         freq--;
//       }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     vector<int> vec;
//     cout << "Enter the elements of an vector: ";
//     while (true)
//     {
//         cin >> n;
//         if (n == -1)
//         {
//             break;
//         }
//         vec.push_back(n);
//     }
//     cout << "majority element = " << majority_element(vec) << endl;
// }

// from brute and optimized approach we can compare only two elements not third element but we can do with moore voting algorithm

// if ans does not exist
#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector<int> &vec) //  T.C -> O(nlogn+n)->O(nlogn)
{
  int freq = 0, ans = 0;
  int n = vec.size();
  for (int i = 0; i < n; i++) // T.C -> O(n)
  {
    if (freq == 0)
    {
      ans = vec[i];
    }
    if (ans == vec[i])
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }
  int cout = 0; // if ans does not exist
  for (int val : vec)
  {
    if (val == ans)
    {
      cout++;
    }
  }
  if (cout > n / 2)
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
  int n;
  vector<int> vec;
  cout << "Enter the elements of an vector: ";
  while (true)
  {
    cin >> n;
    if (n == -1)
    {
      break;
    }
    vec.push_back(n);
  }
  cout << "majority element = " << majority_element(vec) << endl;
}
