// #include <iostream>
// #include <vector>
// using namespace std;
// int container(vector<int> &vec)
// {
//   int max_water = 0;
//   for (int i = 0; i < vec.size(); i++)
//   {
//     for (int j = i + 1; j < vec.size(); j++)
//     {
//       int width = j - i;
//       int ht = min(vec[j], vec[i]); // minimum required to avoid overflow of water and also for area
//       int area = width * ht; // width - max and height -> minimum
//       max_water = max(max_water, area);
//     }
//   }
//   return max_water;
// }
// int main()
// {
//   int n;
//   vector<int> vec;
//   cout << "Enter the height of the elements: ";
//   while (true)
//   {
//     cin >> n;
//     if (n == -1)
//     {
//       break;
//     }
//     vec.push_back(n);
//   }
//   cout << "container with most water : " << container(vec) << endl;
// }


//optimized approach 
#include <iostream>
#include <vector>
using namespace std;
int container(vector<int> &vec) //T.C -> O(n) -> one loop
{
  //two pointer approach
  int n = vec.size();
  int start = 0, end = n-1;
  int max_water = 0;
  while(start<end)
  {
     int width =  end-start;
     int height = min(vec[start],vec[end]);
     int area = width*height;
     max_water = max(max_water,area);
     if(vec[end]<vec[start]) // min height consider and then ++ , -- acc to that condition
     {
      end--;
     }
     else
     {
      start++;
     }

  }
  return max_water;
}
int main()
{
  int n;
  vector<int> vec;
  cout << "Enter the height of the elements: ";
  while (true)
  {
    cin >> n;
    if (n == -1)
    {
      break;
    }
    vec.push_back(n);
  }
  cout << "container with most water : " << container(vec) << endl;
}

