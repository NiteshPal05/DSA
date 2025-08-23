#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(((num>>1)<<1)==num)//phele 2 se divide(right ) fir multiply by 2(left) agar int me nhi hoga toh logic nhi banega 
    {                     // 7/2=3.5 in int = 3 and 3*2=6 not equal to 7 so odd
                          // 8/2=4 and 4*2=8 which is equal to num 
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }

}