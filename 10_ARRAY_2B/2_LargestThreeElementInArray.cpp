#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Element : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }

    int mx = INT_MIN;

    for(int i=0; i<=n-1; i++)
    {
        if(v[i]>mx)
        {
            mx = v[i];
        }
    }

    int smx = INT_MIN;

    for(int i=0; i<=n-1; i++)
    {
        if(v[i]!=mx && v[i]>smx)
        {
            smx = v[i];
        }
    }

    int thrdmx = INT_MIN;

    for(int i=0; i<=n-1; i++)
    {
        if(v[i]!=mx && v[i]!=smx && v[i]>thrdmx)
        {
            thrdmx = v[i];
        }
    }

    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<thrdmx;
}