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

    cout<<endl; 

    // Bubble Sort

    for(int i=0; i<n-1; i++){  // for Passes
        // Traverse
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    // Display
    cout<<"Array After Sorting "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
    //  TC - O(n^2)