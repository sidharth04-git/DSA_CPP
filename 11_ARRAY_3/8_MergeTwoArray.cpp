// Program in C++ to merge two arrays into a third array and then display the merged array. 
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v3)
{
    for(int i=0; i<=v3.size()-1; i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter First Array Size : ";
    cin>>n;
    vector<int>v1;
    cout<<"Enter Elements in First Array : ";
    // Input 1st Array
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v1.push_back(q);
    }
    display(v1);
    // Input 2nd Array
    int m;
    cout<<"Enter Second Array Size : ";
    cin>>m;
    vector<int>v2;
    cout<<"Enter Elements in Second Array : ";
    for(int i=0; i<=m-1; i++)
    {
        int q;
        cin>>q;
        v2.push_back(q);
    }
    display(v2);
    // Third Array
    vector<int>v3(v1.size()+v2.size());
    for(int i=0; i<=v1.size()-1; i++)
    {
        v3[i] = v1[i];
    }
    for(int i=v1.size(); i<=v3.size()-1; i++)
    {
        v3[i] = v2[i-v1.size()];
    }
    display(v3);
}
