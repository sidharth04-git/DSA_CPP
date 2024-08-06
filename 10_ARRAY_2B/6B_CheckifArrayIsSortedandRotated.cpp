#include<iostream>
using namespace std;
#include<vector>
bool sorted(vector<int>&a)
{
    int n = a.size();
    for(int i=0; i<=n-2; i++)
    {
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}

void display(vector<int>&a)
{
    int n = a.size();
    for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter Size of Vector ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements in Vector "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    bool ans = sorted(v);
    if(ans)
        cout<<"Array is Sorted and Rotated "<<endl;
    else
        cout<<"Array is Not Sorted and Rotated"<<endl;
}

