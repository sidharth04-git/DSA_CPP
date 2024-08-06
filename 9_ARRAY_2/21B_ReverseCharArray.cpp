#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin>>n;
    char a[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    // Swap
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for(int i=0; i<=n-1; i++)
    {
        cout<<a[i]<<" ";
    }
}