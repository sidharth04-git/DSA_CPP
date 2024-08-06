// Approach 1 Brute Force

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array ";
    cin>>n;
    cout<<"Enter Array Elements ";
    vector<int>arr(n);
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // Step 1 - Square all the Numbers

    for(int i=0; i<=n-1; i++)
    {
        arr[i] = arr[i]*arr[i];
    }
    // Step 2 - Sort The Array

    sort(arr.begin() , arr.end());
    
    for(int i=0; i<=n-1; i++)  
    {
        cout<<arr[i]<<" ";
    }

    // Time Complexity - O(nlogn)
}