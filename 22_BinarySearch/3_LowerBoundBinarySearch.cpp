#include<iostream>
#include<vector>
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
    int target;
    cout<<"Enter Target : ";
    cin>>target;

    // Lower Bound Algo

    int low = 0;
    int high = n-1;
    bool flag = false; // not found
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target)
        {
            cout<<arr[mid-1];
            flag = true; // found
            break;
        }
        else if(arr[mid]<target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(flag==false)
        cout<<"lower Bound is "<<arr[high];
}