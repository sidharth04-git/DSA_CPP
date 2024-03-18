#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the Array : ";
    for(int i=0; i<=(n-1); i++)
    {
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i=1; i<=n-1; i++)
    {
        if(min>arr[i])
            min = arr[i];
    }
    cout<<"Minimum Element is "<<min;
}