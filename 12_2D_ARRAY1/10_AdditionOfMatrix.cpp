#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row Number : ";
    cin>>m;
    cout<<"Enter Column Number : ";
    cin>>n;
    int a[m][n];
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Second Array
    int p,q;
    cout<<"Enter Row Number : ";
    cin>>p;
    cout<<"Enter Column Number : ";
    cin>>q;
    int b[p][q];
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>b[i][j];
        }
    }
    // ADD
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            b[i][j]+= a[i][j];
        }
        cout<<endl;
    }
    // DISPLAY
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}