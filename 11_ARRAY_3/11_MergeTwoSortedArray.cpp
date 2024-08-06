#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1 , vector<int>&v2) // Vector Return Type
{
    int n = v1.size();
    int m = v2.size();
    vector<int>res(n+m); // Third Vector
    int i = 0; // v1 ke 1st element pr point kr rha hai
    int j = 0; // v2 ke 1st element pr point kr rha hai
    int k = 0; // res array pr point kr rha hai
    
    while(i<=n-1 && j<=m-1) // dono me bhar rhe hai index out of bound nahi hua h
    {
        if(v1[i]<v2[j])
        {
            res[k] = v1[i];
            i++;
        }
        else // v1[j]<v[i]
        {
            res[k] = v2[j];
            j++;
        }
        k++; 
    }
    // for remnaing elements when index is out of bound
    if(i==n) // v1 (i) ke sare element fill ho gaye ab index out of bound ho jayega
    {
        while(j<=m-1)
        {
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    if(j==m)
    {
        while(i<=n-1)
        {
            res[k] = v1[i];
            i++;
            k++;
        }
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    // ARRAY 1
    vector<int>v1;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v1.push_back(q);
    }
    // ARRAY 2
    vector<int>v2;
    int m;
    cout<<"Enter Array Size : ";
    cin>>m;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=m-1; i++)
    {
        int q;
        cin>>q;
        v2.push_back(q);
    }
    vector<int>v = merge(v1,v2);
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
}