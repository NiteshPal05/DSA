#include<iostream>
using namespace std;
int main()
{
    
    int marks[5]={99,90,88,55,78};
    marks[0]=100;  //change the value of box in array acces data 
    //valid index array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    //always excess the value array in limit otherwise error 
    cout<<marks[5]<<endl;//invalid index 
    //size -> 0 to size-1
}