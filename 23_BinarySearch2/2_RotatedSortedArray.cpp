#include<bits/stdc++.h>
using namespace std;

 int search(vector<int>& arr, int key){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        
        if(arr[low]<=arr[mid])  // left part is sorted
        {
            if(arr[low]<=key && key<=arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else  // right part is sorted
        {
            if(arr[mid]<=key && key<=arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
        
    }
    return -1;
 }

int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Enter Elements : ";
    vector<int>arr;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    cout<<search(arr , target);

}