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
    for(int i=0; i<=(n-1); i++)
    {
        cin>>arr[i];
    }
    int product = 1;
    // OUTPUT
    for(int i=0; i<=(n-1); i++)
    {
        product*=arr[i];
    }
    cout<<"Product of Array is "<<product;
}