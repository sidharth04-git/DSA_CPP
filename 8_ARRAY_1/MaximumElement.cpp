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
    int max = arr[0];
    for(int i=1; i<=(n-1); i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    cout<<"Maximum Element is "<<max;
}