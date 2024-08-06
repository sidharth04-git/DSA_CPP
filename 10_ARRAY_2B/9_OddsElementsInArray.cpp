#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
}



