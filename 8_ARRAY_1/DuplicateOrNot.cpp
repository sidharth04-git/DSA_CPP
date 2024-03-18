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
    bool flag  = false; // No Duplicate
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[i]==arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==true)
            break;
    }
    if(flag==true)
        cout<<"Duplicate is Present ";
    else
        cout<<"Duplicate Not Present ";
}