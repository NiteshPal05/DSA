#include<iostream>
using namespace std;
int fabonnaci(int n)//this is fibonnaci by recursion
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        
        return fabonnaci(n-1)+fabonnaci(n-2);

}
}
int main()
{   int num;
    cin>>num;
    for(int i=1/*or i=0 */;i<=num;i++)
    {
     cout<<fabonnaci(i)<<endl;
    }
}