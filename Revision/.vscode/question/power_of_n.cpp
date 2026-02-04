#include <iostream>
using namespace std;
int pow(float x, int n) // TC -> O(logn) , given constraints ->  -2^31<= n <=2^31
{
    // here n converted into binary form and loop run on the basis of binary form ex-> 5 -> 101 -> only 3 times

    int ans = 1;
    // corner case
    if (x == 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    if (x == -1)
    {
        if (n % 2 == 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    // for negative value of n
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    while (n > 0)
    {
        if (n % 2 == 1) // starting modula with 2
        {
            ans *= x;
        }
        x *= x; // converted into square
        n /= 2; // then divide with 2
    }
    return ans; 
}
int main()
{
    int x;
    cout << "Enter the base value: ";
    cin >> x;
    cout << "Enter the exponential value:  ";
    int n;
    cin >> n;
    cout << "answer = " << pow(x, n) << endl;
}