#include<iostream>
#include<vector>
using namespace std;
int not_duplicate(vector<int>&v)
{
    int n = v.size();
    for(int i=0; i<=n-1; i++)
    {
        bool flag = false; // not duplicate
        for(int j=0; j<=n-1; j++)
        {
            if(i==j)
                continue;
            if(v[i]==v[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==false)
            return v[i];     
    }
    return -1;
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
    int res = not_duplicate(v);
    if(res==-1)
        cout<<"There is no non Duplicate Element ";
    else
        cout<<"Non Duplicate Element is "<<res;
}