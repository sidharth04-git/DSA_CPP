#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>&v){
    int n = v.size();
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){

        currentSum += v[i];
        maxSum = max(maxSum , currentSum);

        if(currentSum < 0)
            currentSum = 0;
    }
    return maxSum;
}
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"Maximum SubArray Sum is "<<maxSubArray(v);
}