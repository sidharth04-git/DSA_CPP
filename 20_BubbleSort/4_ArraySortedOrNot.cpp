#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true; // Array Sorted hai
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true)
        cout<<"Array is Sorted";
    else
        cout<<"Array is unsorted";
}