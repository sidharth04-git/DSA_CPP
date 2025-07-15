// Without Binary Search in O(n) T.C

#include<iostream>
#include<vector>
using namespace std;
int PeakElementInArray(vector<int>&v)
{
    int n = v.size();
    int idx = -1;
    for(int i=1; i<n-1; i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            idx = i;
            break;
        }
    }
    return idx;
}
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements : ";
    // Input Element in Vector
    for(int i=0; i<n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<PeakElementInArray(v);
   
}