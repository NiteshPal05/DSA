#include<iostream>
using namespace std;
void changeArr(int arr[],int size)// calling function
{
    for(int i=0;i<size;i++)
    {
        arr[i]= arr[i]*2;
    }
}
int main()//main function
{
    int arr[]={1,2,3};
    int size =3;
     changeArr(arr,size);
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}