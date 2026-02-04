// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for(int i=0;i<n;i++)
//     {
//         for(char j=i+'A';j>='A';j--)
//         {
//             cout<<j<<" ";
            
//         }
       
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        char ch = i+'A';
        for(int j=0;j<i+1;j++)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}