#include<iostream>
#include<vector>
using namespace std;
void foursum(vector<int>v , int target)
{
    int n = v.size();
    for(int i=0; i<=n-4; i++)
    {
        for(int j=i+1; j<=n-3; j++)
        {
            for(int k=j+1; k<=n-2; k++)
            {
                for(int l=k+1; l<=n-1; l++)
                {
                    if(v[i]+v[j]+v[k]+v[l]==target)
                    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                }
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    int target;
    cout<<"Enter Target : "<<endl;
    cin>>target;
    foursum(v,target);
}