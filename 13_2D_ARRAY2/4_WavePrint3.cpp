#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column : ";
    cin>>n;
    cout<<"Enter Elements : ";
    int a[m][n];
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Wave Print --> 7 8 9 6 5 4 1 2 3
    for(int i=m-1; i>=0; i--)
    {
        if(i%2==0)
        {
            for(int j=0; j<=n-1; j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1; j>=0; j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}