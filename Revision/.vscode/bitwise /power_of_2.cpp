#include <iostream>
using namespace std;
int main()
{

    cout << "enter your num: ";
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "not"<<endl;
    }
    else
    {
    while (n > 0)
    {
        int num = n / 2;
          n/=2;
        if (num % 2 != 0)
        {
            cout << "not" << endl;
            break;
        }
        else
        {
            cout << "yes" << endl;
            break;
        }
    }
}
}
