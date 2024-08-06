#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>&a , int t)
{
    int count = 0;
    for(int i=0; i<=a.size()-2; i++)
    {
        for(int j=i+1; j<=a.size()-1; j++)
        {
            if(a[i]+a[j]<t)
                count++; // count krega kitne pairs less than hai target se
        }
    }
    return count; // return count to the fn where it is being called
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int target;
    cout<<"Enter Target ";
    cin>>target;
    int res = count(v,target);
    cout<<"The Number of Pair Whose Sum is Less than "<<target<<" is "<<res;
}