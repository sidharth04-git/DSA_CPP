// Count Number of Element which is strictly greater than x;
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
    int count = 0;
    cout<<"Enter Target : ";
    cin>>x;
    for(int i=0; i<=v.size()-1; i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<"The Number of Element which is Strictly greater than x is "<<count;
}










