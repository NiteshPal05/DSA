#include <iostream>
using namespace std;
int main()
{
    // top part
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " "; // print spaces
        }
        cout << "*"; // print star
        if (i != 0)
        {
            for (int j = 0; j < (2 * i - 1); j++)
            {
                cout << " "; // print middle part spaces
            }
            cout << "*"; // print star
        }
        cout << endl;
    }
    // bottom part
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            for (int j = 0; j < (2 * (n - 2 - i) - 1); j++)// print odd spaces 
            {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }
}