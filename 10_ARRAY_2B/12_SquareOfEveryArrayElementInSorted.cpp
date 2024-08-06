#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v)
{
    int n = v.size();
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter Size ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Vector Elements : ";
    for(int i=0; i<n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

    // Square
    for(int i=0; i<n; i++)
    {
        v[i]*=v[i];
    }
    
    sort(v.begin(),v.end());

    display(v);
}

