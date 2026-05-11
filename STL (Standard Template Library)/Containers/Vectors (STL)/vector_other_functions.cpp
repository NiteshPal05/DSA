#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // other function 
    vector<int>vec = {1,2,3,4,5};

    cout<<"Vector elements : ";
    for(int i : vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vec.erase(vec.begin()); // erase the element at 0th idx

    cout<<"After use erase function : ";
    for(int i : vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of vec : "<<vec.size()<<endl;
    cout<<"capacity of vec : "<<vec.capacity()<<endl;

    cout<<" "<<endl;

    vector<int>vec2 = {6,7,8,9,10};

    cout<<"Vector2 elements : ";
    for(int i : vec2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vec2.erase(vec2.begin()+1,vec2.begin()+3); // erase the element at 1st and 2nd idx of a vec

    cout<<"After use erase function in vec2 at middle : ";
    for(int i : vec2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of vec2 : "<<vec2.size()<<endl;
    cout<<"capacity of vec2 : "<<vec2.capacity()<<endl;

    cout<<" "<<endl;

    vector<int>vec3 = {11,12,13,14,15};

    cout<<"Vector3 elements : ";
    for(int i : vec3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vec3.erase(vec3.begin(),vec3.end()); // erase all the elements of a vector

    cout<<"After use erase function in vec3 (empty ): ";
    for(int i : vec3)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of vec3 : "<<vec3.size()<<endl;
    cout<<"capacity of vec3 : "<<vec3.capacity()<<endl;

    cout<<" "<<endl;

    vector<int>vec4 = {16,17,18,19,20};

    cout<<"Vector4 elements : ";
    for(int i : vec4)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vec4.insert(vec4.begin()+1,100); // insert a  value 100 at index 1 of a vector

    cout<<"After use insert function : ";
    for(int i : vec4)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of vec4 : "<<vec4.size()<<endl;
    cout<<"capacity of vec4 : "<<vec4.capacity()<<endl; // capacity will be 2x ( 5 x 2 = 10) 

    cout<<" "<<endl;

    vector<int>vec5 = {21,22,23,24,25};

    cout<<"Vector5 elements : ";
    for(int i : vec5)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vec5.clear(); // delete all the elements from vec 5 

    cout<<"After use clear function : ";
    for(int i : vec5)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of vec5 : "<<vec5.size()<<endl;
    cout<<"capacity of vec5 : "<<vec5.capacity()<<endl;

    cout<<" "<<endl;

    vector<int>vec6 = {26,27,28,29,30};

    cout<<"Vector6 elements : ";
    for(int i : vec6)
    {
        cout<<i<<" ";
    }
    cout<<endl;

   cout<<"To find a vector is empty or not : "<<vec6.empty()<<endl;

   vec6.clear();
   cout<<"after use the clear function at vec 6 check the empty function : "<<vec6.empty()<<endl;

   
}