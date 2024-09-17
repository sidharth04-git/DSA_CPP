#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }
    int maxsum = INT_MIN;
    for(int st = 0; st<n; st++){
        int currentsum = 0;
        for(int end = 0; end<n; end++){
            currentsum+=arr[end];
            maxsum = max(currentsum , maxsum);
        }
    }
    cout<<"Maximum Subarray Sum = "<<maxsum;

}