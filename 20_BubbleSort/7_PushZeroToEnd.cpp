// Push Zero to end while maintaining relative order
// Time Complexity - O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Enter Elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Bubble Sort
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<(n-1-i); j++){
            if(arr[j]==0){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
