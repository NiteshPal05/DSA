#include<iostream>
#include<vector>//vector header file
using namespace std;
int main()
{
 /* vector<int>vec;//size = 0 or empty vector
    cout<<vec[0]<<endl;*/
 /* vector<int>vec={1,2,3,4,5};
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl; */ 
 /* vector<int>vec(3,0);// 3 is size of index and 0 is the value of each index
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;*/
    vector<char>vec(3,'a');// 3 is size of index and 'a' is the value of each index
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
}