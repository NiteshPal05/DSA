#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int> &vec, int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == target)
        {
            return i;

            break;
        }
    }
    return -1;
}
int main()
{
    int n;
    vector<int> vec;
    cout << "Enter the elements of an vector(press -1 for exit): ";
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        vec.push_back(n);
    }
    int target;
    cout << "Enter the target value : ";
    cin >> target;
    int size = vec.size();
    cout << "index of an target value = " << linearsearch(vec, target, size)<<endl;
}