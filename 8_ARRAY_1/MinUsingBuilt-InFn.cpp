#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int minimum = arr[0];
    for(int i=1; i<=n-1; i++)
    {
        minimum = min(minimum,arr[i]);
    }
    cout<<"Minimum Element is "<<minimum;
}
