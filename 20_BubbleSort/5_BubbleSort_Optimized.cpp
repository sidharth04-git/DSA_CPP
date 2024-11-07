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
    for(int i=0; i<n-1; i++){
        bool flag = true;  // sorted hai
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);  // swap
                flag = false; 
            }
        }
        if(flag==true) // swap did not happen
            break;
    } 

    // Display

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}