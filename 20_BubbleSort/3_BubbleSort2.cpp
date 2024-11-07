#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Bubble Sort

    for(int i=0; i<(n-1); i++){
        // Traverse
        for(int j=0; j<(n-1-i); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    // Display

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}