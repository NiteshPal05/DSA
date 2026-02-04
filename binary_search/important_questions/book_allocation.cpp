#include <iostream>
#include <vector>
using namespace std;
bool isvalid(int m, int n, vector<int> &vec, int map) // map -> maximum allowed pages or mid value
{
    int student = 1, pages = 0;
    
    for (int i = 0; i < n; i++)//O(n)
    {
        if(vec[i]>map) // side case 
        {
            return false;
        }
        if ((pages + vec[i]) <= map)
        {
            pages += vec[i];
        }
        else
        {
            student++;
            pages = vec[i];
        }
    }
    return student <= m ? true : false;
}

int book(int m, int n, vector<int> &vec) // total T.C. -> O(log(sum)*n)
{
    if(m>n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) //O(n)
    {
        sum += vec[i];
    }
    int start = 0, end = sum, ans = -1;
    while (start <= end) //O(log(sum))
    {
        int mid = start + (end - start) / 2;
        if (isvalid(m, n, vec, mid)) // isvalid -> work as a function (function call another function)
        {
            ans = mid;
            end = mid - 1; // valid -> left(for minimum)
        }
        else
        {
            start = mid + 1; // invalid -> right
        }
    }
    return ans;
}
int main()
{
    int a;
    vector<int> vec;
    cout << "Enter your elements (press -1 for exit): ";
    while (true)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }
        vec.push_back(a);
    }
    int m; // m -> no. of student 
    cout<<"Enter the no. of student: "; 
    cin>>m;

    int n = vec.size();  // n -> no. of books (for ith size in vector)
    cout<<"answer = "<<book(m,n,vec)<<endl;
}