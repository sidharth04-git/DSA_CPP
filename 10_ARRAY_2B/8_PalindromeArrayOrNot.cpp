#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // Palindrome Condition
    bool flag = true;  // Palindrome Hai
    int i = 0;
    int j = n-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            flag = false; // Palindrome nahi hai
            break;
        }
        i++;
        j--;
    }
    if(flag==true)
        cout<<"Array is Palindrome ";
    else
        cout<<"Array is not Palindrome ";
}