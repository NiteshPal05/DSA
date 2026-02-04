// #include<iostream>
// using namespace std;
// void prime(int n)
// {
//     bool isprime = true;
//     for(int i=2;i<(n-1);i++)
//     {
//       if(n%i==0)
//       {
//         isprime = false;
//       }
//     }
//     if(isprime == false)
//     {
//         cout<<"not prime"<<endl;
//     }
//     else
//     {
//      cout<<"prime"<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter your no. :";
//     cin>>n;
//     prime(n);
// }


#include<iostream>
using namespace std;
void prime(int n)
{
   if (n==1||n==2)
   {
    cout<<"prime"<<endl;
   }
   if(n==0)
   {
    cout<<"whole"<<endl;
   }
   else
   {
    for(int i=2;i<=(n-1);i++)
    {

    if(n%i==0)
      {
         cout<<"not prime"<<endl;   
         break;  
      }
      else
      {
        cout<<"prime"<<endl;
        break;
        
      }   
}
}
}
    
int main()
{
    int n;
    cout<<"enter your no. :";
    cin>>n;
    prime(n);
    
}