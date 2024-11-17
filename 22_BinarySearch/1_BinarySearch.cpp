#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> nums , int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return -1;  // target not found

}

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
    cout<<"Element is Present at "<<search(arr , target)<<"th index";
}