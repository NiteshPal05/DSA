#include <iostream>
#include <vector>
using namespace std;
void dnf(vector<int> vec)
{
    int mid = 0, high = vec.size() - 1, low = 0;
    while (mid <= high)
    {
        if (vec[mid] == 0)
        {
            swap(vec[mid], vec[low]);
            mid++, low++;
        }
        else if (vec[mid] == 1)
        {
            mid++;
        }
        else // for 2
        {
            swap(vec[mid], vec[high]);
            high--;
        }
    }
    for (int value : vec)
    {
        cout << value << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec = {1, 2, 1, 1, 2, 0, 1, 0};
    dnf(vec);
}


