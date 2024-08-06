#include<iostream>
using namespace std;
#include<vector>
int singleElement(vector<int>&a)
{
    int n = a.size();
    int res = 0;
    for(int i=0; i<=n-1; i++)
    {
        res = res ^ a[i];
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter Array Size ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Array Elements ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int ans = singleElement(v);
    cout<<ans;
}