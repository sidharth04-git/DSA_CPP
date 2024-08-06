// Using Mod Operator
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v[i]<<" ";
    }
}

void rotate(vector<int>&a , int k)
{
    int n = a.size();
    vector<int>temp(n);
    for(int i=0; i<=n-1; i++)
    {
        temp[(i+k)%n] = a[i]; // Formula
    }
    a = temp;  // temp ko a me daal dege
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cout<<"Enter k ";
    cin>>k;
    // Now Call a Function Rotate 
    rotate(v,k);
    display(v);
}


