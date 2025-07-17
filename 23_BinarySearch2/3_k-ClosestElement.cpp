#include<bits/stdc++.h>
using namespace std;

vector<int>KClosest(vector<int>arr , int k , int x)
{
    int n = arr.size();
    vector<int>ans(k);
    if(x<arr[0])
    {
        for(int i=0; i<k; i++)
        {
            ans[i] = arr[i];
        }
        return ans;
    }
    if(x>arr[n-1])
    {
        int i = n-1;
        int j = k-1;
        while(j>=0)
        {
            ans[j] = arr[i];
            i--;
            j--;
        }
        return ans;
    }
    // Binary Search Logic
    int low = 0;
    int high = n-1;
    bool flag = false;
    int t = 0;
    int mid = -1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]==x)
        {
            flag = true;
            ans[t] = arr[mid];
            t++;
            break;
        }
        else if(arr[mid]<x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    int lb = high;
    int ub = low;
    if(flag==true)
    {
        lb = mid-1;
        ub = mid+1;
    }
    while(t<k && lb>=0 && ub<=n-1)
    {
        int d1 = abs(x-arr[lb]);
        int d2 = abs(x-arr[ub]);
        if(d1<=d2)
        {
            ans[t] = arr[lb];
            lb--;
            t++;
        }
        else
        {
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if(lb<0)
    {
        while(t<k)
        {
            ans[t] = arr[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1)
    {
        while(t<k)
        {
            ans[t] = arr[lb];
            t++;
            lb--;
        }
    }
    sort(ans.begin() , ans.end());
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k,x;
    cout<<"Enter Element x which closest you want (x) : ";
    cin>>x;
    cout<<"Enter How many Closest Element you want (y) :";
    cin>>k;
    vector<int>ans(KClosest(v , k , x));
    int size = ans.size();
    for(int i=0; i<size; i++)
    {
        cout<<ans[i]<<" ";
    }
}