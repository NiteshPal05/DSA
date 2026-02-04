#include <iostream>
using namespace std;
int main()
{
    // top part
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // 1st triangle
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        // 2nd triangle
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Print pryamid
    for (int i = 0; i < n-1 ; i++)
    {
        {
            // 3rd triangle
            for (int j = 0; j < n-i-2; j++)//3-2-1
            {
                // print spaces
                cout << " ";
            }
            for (int j = 0; j <= i + 1; j++)
            {
                cout << "*";
            }
            // 4th triangle

            {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        }
        cout << endl;
    }
}