#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in Array : ";
    for(int i=0; i<=(n-1); i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0; i<=(n-1); i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    int smax = INT_MIN;
    for(int i=0; i<=(n-1); i++)
    {
        if(smax<arr[i] && arr[i]!=max)
            smax = arr[i];
    }
    cout<<"Second Largest Element is "<<smax;
}