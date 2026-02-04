#include<iostream>
using namespace std;
void fabo(int n)
{
    int num,firstdigit = 0,seconddigit=1,sum=1;// becuz i==1 = 1
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"0"<<" ";
        }
        else if(i==1)
        {
            cout<<"1"<<" ";
        }
        num =  firstdigit + seconddigit;
        firstdigit = seconddigit;
        seconddigit = num;
        sum+=num;
        cout<< num<<" ";  
    }
    cout<<endl;
    cout<<"sum = "<<sum<<endl;

}
int main()
{
    int n;
    cout<<"enter your no. : ";
    cin>>n;
    fabo(n);
}