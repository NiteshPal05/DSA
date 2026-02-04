#include <iostream>
using namespace std;
bool ispossible(vector<int> vec, int c, int mad) // mad -> minimum allowed dist.
{
    sort(vec.begin(), vec.end());
    int cows = 1, lastpossibledistance = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i] - lastpossibledistance) >= mad)
        {
            cows++;
            lastpossibledistance = vec[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}
int aggrresive(vector<int> vec, int c)
{
    int maxvalue = INT_MIN;
    int minvalue = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
    {
        maxvalue = max(maxvalue, vec[i]);
        minvalue = min(minvalue, vec[i]);
    }
    int st = 1, end = maxvalue - minvalue, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ispossible(vec, c, mid))
        {
            ans = mid;
            // right me largest
            st = mid + 1;
        }
        else // left minimum
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the distance of stall:(press -1 for exit): ";
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    cout << "Enter the no. of cows : ";
    int c;
    cin >> c;
    cout << "minimum distance btw cows is largest possible : " << aggrresive(vec, c) << endl;
}