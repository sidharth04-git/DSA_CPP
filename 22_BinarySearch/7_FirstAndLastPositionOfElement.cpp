#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target){
    int n = nums.size();
    vector<int>v(2);
    v[0] = -1;
    v[1] = -1;

    // First Occurence

    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            if(mid==0){
                v[0] = mid;
                break;
            }
            else if(nums[mid-1]!=target){
                v[0] = mid;
                break;
            }
            else
                high = mid - 1;
        }
        else if(nums[mid]<target)
            low = mid + 1;
        else 
            high = mid - 1;
    }

    // Last Occurence

    low = 0;
    high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(nums[mid]==target){
            if(mid == n-1){
                v[1] = mid;
                break;
            }
            else if(nums[mid+1]!=target){
                v[1] = mid;
                break;
            }
            else
                low = mid + 1;
        }
        else if(nums[mid]>target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return v;

}

int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>nums;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    vector<int>ans = searchRange(nums , target);
    // print the answer
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}