// Sum Two Array And Store it in Another Array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Size of 1st Array : ";
    cin>>n;
    cout<<"Enter Size of 2nd Array : ";
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"Enter Elements in 1st Array : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Elements in 2nd Array : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        cin>>arr2[i];
    }
    // Third Array Banayege
    int a = max(m,n);
    int ans[a];  // Third Array ans
    // Three Pointer for managing Indexing 
    int i = n-1; // arr1 pr point krega
    int j = m-1; // arr2 pr point krega
    int k = a-1; // ans pr point krega
    int carry = 0;  // it represent carry
    while(k>=0)
    {
        int sum = carry;
        if(i>=0)
            sum = sum + arr1[i];
        if(j>=0)
            sum = sum + arr2[j];
        int q = sum/10;  // gives Carry 
        int r = sum%10; // gives sum 
        ans[k] = r;
        carry = q;
        i--;
        j--;
        k--;
    }
    if(carry!=0)
        cout<<carry<<" ";
    for(int i=0; i<=a-1; i++)
    {
        cout<<ans[i]<<" ";
    }
}