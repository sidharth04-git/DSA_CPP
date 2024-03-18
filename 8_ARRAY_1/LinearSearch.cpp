#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the Array : ";
    for(int i=0; i<=(n-1); i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter Element Which You want to Search : ";
    cin>>x;
    bool flag = false; // Element Not Present
    for(int i=0; i<=(n-1); i++)
    {
        if(arr[i]==x)
            flag = true;  // Element Present
    }
    if(flag==true)
        cout<<"Element is Present ";
    else
        cout<<"Element is not Present ";
}