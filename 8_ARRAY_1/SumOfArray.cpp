#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the Array : ";
    // INPUT
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // CONDITION AND OUTPUT
    int sum = 0; 
    for(int i=0; i<=n-1; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum of Array is "<<sum;
}