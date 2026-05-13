# include<iostream>
using namespace std;
int main()
{
    pair<int,int>p = {1,2};
    cout<<"pair 1st el : "<<p.first<<endl;
    cout<<"pair 2nd el : "<<p.second<<endl;

    pair<string,int>p1 = {"Nitesh",19};
    cout<<"name : "<<p1.first<<endl;
    cout<<"age : "<<p1.second<<endl;

    pair<char,float>p2 = {'v',25};
    cout<<"1st el : "<<p2.first<<endl;
    cout<<"2nd el : "<<p2.second<<endl;

    // we also create pair in pair
    pair<int , pair<int,int>>p3 = {1,{2,3}};
    cout<<"first el of pair : "<<p3.first<<endl;
    cout<<"second - first el of pair : "<<p3.second.first<<endl;
    cout<<"second - second el of pair : "<<p3.second.second<<endl;

}