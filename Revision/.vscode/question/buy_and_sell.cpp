#include <iostream>
#include <vector>
using namespace std;
int stock(vector<int> &vec)
{
    int n = vec.size();
    int maxprofit = 0;          // maan lo
    int bestbuy = vec[0];       // phele din toh yahi kharidenge
    for (int i = 1; i < n; i++) // ab agle din hi toh condition lga payenge that's why -> i = 1 not 0
    {
        if (vec[i] > bestbuy)
        {
            maxprofit = max(maxprofit, vec[i] - bestbuy);
        }
        bestbuy = min(vec[i], bestbuy); // bestbuy ko minimum banaya
    }
    return maxprofit;
}
int main()
{
    
    // cout << "Enter the size of the array: ";
    // int size;
    // cin>>size;

    vector<int>vec;

    int n;
    cout << "Enter the buy and sell value: ";
    while(true)
    {
      cin>>n;
      if(n == -1)
      {
        break;
      }
      vec.push_back(n);
    }

    // int a;
    // cout<<"Enter the buy and sell values: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >>a;
    //     vec.push_back(a);
    // }
    // cout << "maximum profit = " << stock(vec, size) << endl;

    cout << "maximum profit = " << stock(vec)<< endl;

}