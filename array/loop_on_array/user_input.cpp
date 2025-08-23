#include<iostream>
using namespace std;
int main()
{   
    int size;
    cout<<"enter a size of an array: ";
    cin>>size;
    int num[size];
    cout<<"enter the elements of an array: ";
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    int smallest = INT_MAX;//means +infinity
    int largest = INT_MIN;//means -infinity
    for(int i=0;i<size;i++)
    {
        smallest= min(smallest,num[i]);//min is a function to find minimum value      
        largest = max(num[i],largest);// max is a fumction to find maximum value 
        
    }
    cout<<"minimum = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
   
}