#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        if(i%2!=0)
        {
            arr[i]*=2;
        }
        else
        {
            arr[i] = arr[i]+10;
        }
    }
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}