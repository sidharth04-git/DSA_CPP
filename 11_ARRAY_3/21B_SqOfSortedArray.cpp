// Approach 2 - Using Two Pointer Method
// Time Complexity - O(n)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter Array Elements ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    vector<int>res(n);

    int i = 0;   // point at arr 0th index
    int j = n-1; // point at arr last index
    int k = n-1; // point at res last index

    while(k>=0)
    {
        int a = arr[i]*arr[i];  // Store the Sq 
        int b = arr[j]*arr[j]; // Store the Sq

        if(a>b)
        {
            res[k] = a;
            i++;
        }
        else
        {
            res[k] = b;
            j--;
        }
        k--;
    }

    // Display The Answer

    for(int i=0; i<=n-1; i++)
    {
        cout<<res[i]<<" ";
    }
}