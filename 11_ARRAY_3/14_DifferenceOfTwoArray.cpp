// Condition --> arr1>arr2
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter Size of 1st Array : ";
    cin>>n;
    cout<<"Enter Size of 2nd Array : ";
    cin>>m;
    int arr1[n]; // 1st Array
    int arr2[m]; // 2nd Array
    cout<<"Enter Elements of 1st Array : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Elements of 2nd Array : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        cin>>arr2[i];
    }
    int ans[n]; // bec it is given arr1>arr2
    int i = n-1; // arr1 ke last index pr point krega
    int j = m-1; // arr2 ke last index pr point krega
    int k = n-1; // res ke last index pr point krega
    int borrow = 0;
    while(k>=0)
    {
        int diff = arr1[i] - borrow;
        if(j>=0){
            diff-= arr2[j];
        }
        if(diff<0)
        {
            diff = diff + 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        ans[k] = diff;
        i--;
        j--;
        k--;
    }
    cout << "Subtraction Result: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<ans[i]<<" ";
    }



}