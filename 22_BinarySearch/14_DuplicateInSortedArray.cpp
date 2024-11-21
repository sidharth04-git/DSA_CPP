#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }

    // Find Duplicate Number

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==mid+1)
            low = mid + 1;
        else if(arr[mid]==mid){
            if(arr[mid-1]==arr[mid]){
                cout<<arr[mid];
                break;
            }
            else 
                high = mid - 1;
        }
    }
}