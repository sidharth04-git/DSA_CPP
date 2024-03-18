#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    cout<<"Enter Elements in Array : ";
    // Input using For Loop 
    for(int i=0; i<=6; i++)
    {
        cin>>arr[i];
    }
    // Output Using For Loop
    for(int i=0; i<=6; i++)
    {
        cout<<arr[i]<<" ";
    }
}