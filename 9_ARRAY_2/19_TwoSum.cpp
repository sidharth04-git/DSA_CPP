#include<iostream>
#include<vector>
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
    int x;
    cout<<"Enter Target Element : ";
    cin>>x;
    for(int i=0; i<=n-2; i++) // 0th index se second last index tk
    {
        for(int j=i+1; j<=n-1; j++) // 1st indx to last index
        {
            if(v[i]+v[j]==x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}