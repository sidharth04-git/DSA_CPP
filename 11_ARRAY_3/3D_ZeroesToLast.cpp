// Use Two Pointer i and j and intitalize it with 0
// i --> 0 pr travel krega
// j --> non zero par travel karega

#include<iostream>
#include<vector>
using namespace std;
void movesZero(vector<int>&v)
{
    int n = v.size();
    int i = 0; // 0 pr rhega
    int j = 0; // non zero pr rhega
    while(i<=n-1 && j<=n-1)
    {
    if(v[i]==0 && v[j]!=0)
    {
        if(j>i)
            swap(v[i] , v[j]);
        else
            j++;
    }
    if(v[i]!=0)
        i++;
    if(v[j]==0)
        j++;
    }
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
    movesZero(v);
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[i]<<" ";
    }
    
}