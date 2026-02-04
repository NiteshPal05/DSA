#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the no. : ";
    cin >> n;
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)       //left *
            cout << "*";
        for (int j = 1; j <= 2*(n-i); j++) // spaces
            cout << " ";
        for (int j = 1; j <= i; j++)      // right *
            cout << "*";
        cout << endl;                    // end of upper part 
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)        // left *
            cout << "*";
        for (int j = 1; j <= 2*(n-i); j++) // spaces
            cout << " ";
        for (int j = 1; j <= i; j++)     // right *
            cout << "*";
        cout << endl;                   // end of lower part 
    }
    return 0;
}