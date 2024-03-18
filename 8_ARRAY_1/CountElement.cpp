#include<iostream>
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
    int x;
    int count = 0;
    cout<<"Enter Value of x : ";
    cin>>x;
    for(int i=0; i<=(n-1); i++)
    {
        if(arr[i]>x)
            count++;
    }
    cout<<count;
}