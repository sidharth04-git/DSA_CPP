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
    int mx = INT_MIN;
    int smx = INT_MIN;
    int thrdmx = INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>mx)
            mx = arr[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>smx && arr[i]!=mx)
            smx = arr[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>thrdmx && arr[i]!=mx && arr[i]!=smx)
            thrdmx = arr[i];
    }
    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<thrdmx;
}

