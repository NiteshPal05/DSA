#include <iostream>
using namespace std;
int main()
{
    int factorial = 1, num;
    cout << "Enter your number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "ans = " << factorial << endl;
}