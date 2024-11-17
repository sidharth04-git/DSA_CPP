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

    // Algorithm for Lower Bound 

    for(int i=0;  i<n; i++){
        if(arr[i]>target){
            cout<<"Lower Bound is "<<arr[i-1];
            break;
        }
    }
}
                          // Time Complexity - O(n)