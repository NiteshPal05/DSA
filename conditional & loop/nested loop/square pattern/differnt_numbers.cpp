#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int num=1;
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<3;j++)
        {
            
            cout<<num<<"    ";//use "  " only for space 
            num++;
        }
        
        //cout<<endl;//we can't use space in line or row using this -> " ";
                   // instead use multiple endl
                   //like this
       // cout<<endl<<endl; 
       //or 
       cout<<"\n\n\n"<<endl;          
        
    }
   // cout<<"check how itration work in loop the vale of num = "<<num<<endl;
}