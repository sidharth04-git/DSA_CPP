// Given a sorted binary array, efficiently count the total number of 1’s in it.
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
    int firstIdx = -1;

    // (1) Find First Occurence using Binary Search Algo

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==1){
            if(mid==0){
                firstIdx = mid;
                break;
            }
            else if(arr[mid-1]!=1){
                firstIdx = mid;
                break;
            }
        }
        else if(arr[mid]>1)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(firstIdx==-1)
        cout<<0;
    else
        cout<<n-firstIdx;
}

