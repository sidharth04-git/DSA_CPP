// Program in C++ to merge two arrays into a third array and then reversed the merged array. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverse(vector<int>&v)
{
    int i = 0;
    int j = v.size()-1;
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
void merge(vector<int>&v1 , vector<int>&v2 , vector<int>&v3)
{
    for(int i=0; i<=v1.size()-1; i++)
    {
        v3.push_back(v1[i]); // peecehe se element dalte jayega
    }
    for(int i=0; i<=v2.size()-1; i++)
    {
        v3.push_back(v2[i]);
    }
    cout<<endl;
}

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
    vector<int>v2;
    vector<int>v3;
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
    cout<<"Enter Elements in Second Array : ";
    for(int i=0; i<=m-1; i++)
    {
        int q;
        cin>>q;
        v2.push_back(q);
    }
    display(v2);
    merge(v1,v2,v3);
    display(v3);
    reverse(v3);
    display(v3);
}
