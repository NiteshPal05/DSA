#include<iostream>
using namespace std;
int main()
{   int index;
    int num[]={100,4,6,-9,-999,-99};
    int size =6;//valid index you can't put size=7 called index out of bound error 
    int smallest = INT_MAX;//  +infinity
    for(int i=0;i<size;i++)//for(int i=1;i<=size;i++) if we try this then loop skip index 0 or box of 0 in array
    {
        if(num[i]<smallest)
        {
            smallest = num[i];
            index = i;
        }
        
    }
    cout<<"minimum = "<<smallest<<endl;
    cout<<"index no. = "<<index<<endl;

}