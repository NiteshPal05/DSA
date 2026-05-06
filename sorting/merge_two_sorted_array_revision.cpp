// # include<iostream>
// using namespace std;
// void merge(int arr1[],int arr2[],int m,int n)
// {
//     int i = m-1;
//     int j = n-1;
//     int idx = (m+n)-1;
//     while(i>=0 && j>=0)
//     {
//         if(arr1[i]>arr2[j])
//         {
//             arr1[idx] = arr1[i];
//             i--;
//             idx--; 
//         }
//         else
//         {
//             arr1[idx] = arr2[j];
//             j--;
//             idx--;
//         }
//     }
//     while(j>=0)
//     {
//         arr1[idx] = arr2[j];
//         j--;
//         idx--;
//     }
// }
// void printarray(int arr1[],int arr2[],int m,int n)
// {
//     for(int i=0;i<m+n;i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr1[] = {7,8,9,0,0,0};
//     int arr2[] = {4,5,6};
//     int m = 3;
//     int n = 3;

//     merge(arr1,arr2,m,n);
//     printarray(arr1,arr2,m,n);
//     int size = sizeof(arr1)/sizeof(arr1[0]);
//     cout<<size;
//     cout<<endl;


// }


// in vec form 

# include<iostream>
# include<vector>
using namespace std;
void merge(vector<int>vec1 , vector<int>vec2,int a ,int b)
{
    int i = a -1;
    int j = b-1;
    int idx = (a+b) - 1;
    while(i>=0 && j>=0)
    {
        if(vec1[i]>=vec2[j])
        {
            vec1[idx--] = vec1[i--];
        }
        else
        {
            vec1[idx--] = vec2[j--];
        }
    }
    while (j>=0)
    {
         vec1[idx--] = vec2[j--];
    }

    for(int val: vec1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>vec1;
    vector<int>vec2;

    cout<<"Enter the elements of an 1st array : ";
    int m ;
    while(true)
    {
        cin>>m;
        if(m==-1)
        {
            break;
        }
        vec1.push_back(m);
    }

    cout<<"Enter the elements of 2nd array : ";
    int n;
    while(true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        vec2.push_back(n);
    }
    for(int i=0;i<vec2.size();i++)
    {
        vec1.push_back(0);
    }

    for(int v : vec1)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    
    int a = vec1.size()-vec2.size();
    int b = vec2.size();

    merge(vec1,vec2,a,b);

}
