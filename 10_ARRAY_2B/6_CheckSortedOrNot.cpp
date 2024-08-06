#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // Output
    bool flag = true; // Array is Sorted
    for(int i=0; i<=n-2; i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag = false;  // Unsorted
            break;
        }
    }
    if(flag==true)
        cout<<"Array is Sorted ";
    else
        cout<<"Array is not Sorted ";
}











