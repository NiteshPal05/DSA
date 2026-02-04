#include <iostream>
#include <vector>
using namespace std;
int single(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    int st = 0;
    int end = vec.size() - 1;
    if (vec.size() == 1)
    {
        return vec[0];
    }
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if (mid == 0 && vec[0] != vec[1])
        {
            return vec[mid];
        }
        if (mid == vec.size() - 1 && vec[vec.size() - 1] != vec[vec.size() - 2])
        {
            return vec[mid];
        }
        if (vec[mid - 1] != vec[mid] && vec[mid] != vec[mid + 1])
        {
            return vec[mid];
        }
        if (mid % 2 == 0) // even
        {
            if (vec[mid] == vec[mid - 1]) // left
            {
                end = mid - 1;
            }
            else // (vec[mid] == vec[mid+1]) -> right
            {
                st = mid + 1;
            }
        }
        else // odd
        {
            if (vec[mid] == vec[mid - 1])
            {
                st = mid + 1; // right
            }
            else //(vec[mid] == vec[mid+1])
            {
                end = mid - 1; // left
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    vector<int> vec;
    cout << "enter the elements of an vector(press -1 for exit): ";
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    cout << "Single element in sorted array = " << single(vec) << endl;
}