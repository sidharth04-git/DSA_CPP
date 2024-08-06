#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter First Array Size ";
    cin>>m;
    cout<<"Enter Second Array Size : ";
    cin>>n;
    int arr1[m];
    int arr2[n];
    cout<<"Enter First Array Element : ";
    for(int i=0; i<=m-1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Second Array Element : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr2[i];
    }
    int i = m-1;     // point at last index of arr1
    int j = n-1;    // points at last index of arr2
    int k = m+n-1; // points at the Zeroes present in arr1
    while(j>=0 && i>=0){
        if(arr1[i]>arr2[j])
            arr1[k--] = arr1[i--];
        else
            arr1[k--] = arr2[j--];
    }
    while(i>=0)
        arr1[k--] = arr1[i--];
    while(j>=0)
        arr1[k--] = arr2[j--];


    for(int i=0; i<=m+n-1; i++)
    {
        cout<<arr1[i]<<" ";
    }

}