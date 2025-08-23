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
    if(i==1)//phele loop me ...or 
   //if(i<=1) but iske liye i=0;i<=n but isse sum me dikkat aa rhi hai
    {
      fabo=0;
    }
    else if(i==2)//dusre loop me 
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
  
    
    fibonnacci(1);
    fibonnacci(2);
    fibonnacci(3);
    fibonnacci(4);
    fibonnacci(5);
 

 }
