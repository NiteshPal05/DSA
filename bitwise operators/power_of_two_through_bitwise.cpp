#include <iostream>
using namespace std;
int main(){
    int n=12;
    if (n>0 && (n&(n-1))==0 ) //1100 & 1011 = 1000
    {
        cout << "the number is a power of 2";
    }
    else 
    {
        cout << "the number is not power of 2;";
    }
    return 0;
}
