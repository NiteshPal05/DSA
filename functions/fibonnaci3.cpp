#include<iostream>
using namespace std;
 void fibonnacci(int n)
 {
  int fabo;
  int firstdigit=0;
  int seconddigit=1;
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    if(i==1)
    {
      fabo=0;
    }
    else if(i==2) 
    {
      fabo=1;
    }
    else
    {
      
      fabo=firstdigit+seconddigit;
      firstdigit=seconddigit;
      seconddigit=fabo; 
       
    }
     
      cout<<fabo<<" ";
      
       sum+=fabo;   
  }
  cout<<"= "<<sum<<endl;
 
 }
 int main()
 {
  
  for(int i=1;i<=10;i++)
  {
    fibonnacci(i);
  }

 }
