# include<iostream>
# include<vector>
using namespace std;
int main()
{
    vector<int>vec = {1,2,3,4,5};
    cout<<"element at 0th idx : "<<*(vec.begin())<<endl; // we do derefrence means value on that address 
    cout<<"element at last idx : "<<*(vec.end()-1)<<endl; // '-1' means here we are just jumping back to previous memory location address where the value 5 is stored on that address 
    cout<<"we find garbage value if we print the derefrence of vec.end(): "<<*(vec.end())<<endl;

    cout<<"old way : ";
    vector<int>:: iterator it ;
    for(it = vec.begin();it!=vec.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;


    cout<<"better way : ";
    for(vector<int>:: iterator it = vec.begin();it!=vec.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<"auto keyword use  : ";
    for(auto it = vec.begin();it!=vec.end();it++) // <- auto keyword use
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // backword loop
    cout<<"backward loop : ";
    for(auto it = vec.rbegin() ; it!= vec.rend();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<"derefrence of vec.rbegin() : "<<*(vec.rbegin())<<endl; 
    cout<<"derefrence of vec.rend() : "<<*(vec.rend())<<endl; // it means vec.rend point on (0-1)th idx  
    cout<<"derefrence of vec.rend() : "<<*(vec.rend()-1)<<endl; // '-1' means here we are just jumping back to previous memory location address where the value 1 is stored on that address 
}

// it!=vec.end() : loop is going until the value of 'it' is not equal to vec.end
// when the pointer -> 'it' is equal to pointer ->  'vec.end()' loop is closed 