#include<iostream>
using namespace std;
int main()
{
    int num=3;
    char ch ='A';
    //int n = 1; this for that to print number with alphabate
    for(int i=0;i<3;i++)
    {  // int num =1 ;
      //  cout<<num;(to print 1 in 1 column with alphabate)
        for(int j=0;j<3;j++)
        {
          cout<</*n<<*/ch<<"  ";
         // n++;
          ch+=1;//a+1=b or 65+1=66
        }
        cout<<endl<<endl;
    }
    //cout<<"check = "<<ch<<endl;
    
}