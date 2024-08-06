 // Leaders are the elements that are larger than all the elements to their right in the array.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int>leader(int a[] , int n)
{
    int maxi = INT_MIN;
    vector<int>ans;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]>maxi)
        {
            maxi = a[i];
            ans.push_back(a[i]);
        }
        maxi = max(maxi , a[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in Array : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    vector<int> res = leader(arr,n);
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<endl;
    }

}