// # include <iostream>
// using namespace std;

//  void changeA(int a)
// {
//     a = 20;
// }
// int main()
// {
//    int a =10;
//    changeA(a);
//     cout << "inside main function : "<<a<<endl;
// }

// # include <iostream>
// using namespace std;

//  void changeA(int* ptr ) // <- we use pointer to store 'a' address 
// {
//      *ptr = 20;
// }
// int main()
// {
//    int a =10;
//    changeA(&a);
//     cout << "inside main function : "<<a<<endl;
// }

# include <iostream>
using namespace std;

 void changeA(int &b) // <- not pass address ,this is symbol of alias called pass refrence 
{
    b = 20;
}
int main()
{
   int a =10;
   changeA(a);
    cout << "inside main function : "<<a<<endl;
}