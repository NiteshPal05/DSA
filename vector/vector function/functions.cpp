#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;//empty vector
     
    cout<<"size = "<<vec.size()<<endl;

    vec.push_back(1);//push element from last of vector 
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<"after push_back size = "<<vec.size()<<endl;
    cout<<"elements of vector after push back  ";
    for(int value:vec)//for each loop
    {
        cout<<value<<","<<" ";//for empty vector loop does not run
    }
    cout<<endl;

    vec.pop_back();//remove element from last of vector and not define element
    cout<<"after pop_back size = "<<vec.size()<<endl;
    cout<<"elements of vector after pop_back = ";
    for(int value:vec)//for each loop
    {
        cout<<value<<","<<" ";//for empty vector loop does not run
    }
    cout<<endl;

    cout<<"front value of vector = "<<vec.front()<<endl;//show front value of an vector
    cout<<"back  value of vector = "<<vec.back()<<endl;//show  last  value of an vector

    cout<<"look the value on index : "<<vec.at(0)<<","<<vec.at(1)<<","<<vec.at(2)<<","<<vec.at(3)<<","<<vec.at(4)<<endl;
    // at function basically use for to find the element on the vector by giving index value
    // at 4th index no value have to be found so the compiler give an error 
}