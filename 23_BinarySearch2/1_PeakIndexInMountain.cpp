// Using Binary Search to find the peak index in a mountain array
// A mountain array is an array that has a peak element, which is greater than its neighbors.
#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            return mid;
        }
        else if(arr[mid]<arr[mid+1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 100; // this line will never be executed
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans = peakIndexInMountainArray(arr);
    cout<<"Peak Index is : "<<ans<<endl;
}
