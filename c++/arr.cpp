#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    cout<<"Enter the elements of an vector( press -1 to exit): ";
    int a;
    while(true)
    {
        cin>>a;
        if(a==-1)
        {
            break;
        }
        vec.push_back(a);
    }
    int choice;
    cout<<"1.Insert\n2.Delete\n3.Update\n4.Exit"<<endl;
    cin>>choice;

    switch (choice)
    {
        case 1:
            cout<<"Insert Options:- \n1.At beginning \n2.At end"<<endl;
            int insert_choice;
            cin>>insert_choice;
            switch(insert_choice)
            {
                case 1:
                    cout<<"Enter value: ";
                    int value;
                    cin>>value;
                    vec.insert(vec.begin(),value);
                    cout<<"inserted : ";
                    for(int val : vec)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;
                    break;

                    case 2:
                    cout<<"Enter value: ";
                    int value;
                    cin>>value;
                    vec.push_back(value);
                    cout<<"inserted : ";
                    for(int val : vec)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;
                    break;
            }
            case 2:
            switch (expression)
            {
            case constant expression:
                /* code */
                break;
            
            default:
                break;
            }
                case 1:
                    cout<<"Enter value: ";
                    vec.erase(vec.begin());
                    cout<<"deleted : ";
                    for(int val : vec)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;
                    break;

                    case 2:
                    cout<<"Enter value: ";
                    vec.erase(vec.end());
                    cout<<"deleted : ";
                    for(int val : vec)
                    {
                        cout<<val<<" ";
                    }
                    cout<<endl;
                    break;
    }



}