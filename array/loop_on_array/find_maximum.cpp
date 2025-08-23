#include<iostream>
using namespace std;
int main()
{   int index;
    int num[]={-99,-1,-4,666,111};
    int size = 5;
    int maximum = INT_MIN;// -infinity
    for(int i=0 ;i<size;i++)
    {
        if(num[i]>maximum)
        {
            maximum =num[i];
            index = i;   
        }
    }
    cout<<"maximum = "<<maximum<<endl;
    cout<<"index = "<<index<<endl;
}