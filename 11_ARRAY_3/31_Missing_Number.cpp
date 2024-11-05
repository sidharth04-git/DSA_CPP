#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>nums){
    int n = nums.size();
    int XOR1 = 0;
    int XOR2 = 0;

    for(int i=1; i<=n; i++){  // XOR all number from 1 to n
        XOR1 = XOR1 ^ i;
    }

    for(int i=0; i<n; i++){
        XOR2 = XOR2 ^ nums[i]; // XOR all array elements
    }

    return XOR1 ^ XOR2;
}
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>arr(n);  // Initialize vector to size n or use push_back 
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Missing Element is "<<missingNumber(arr);
}