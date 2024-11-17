// Time Complexity - O(N)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,6,7,9,13,16,18};
    int n = 11;
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==mid)
            low = mid + 1;
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;
}