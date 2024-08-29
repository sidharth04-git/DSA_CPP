#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;

    //   Largest Element

    int mx = INT_MIN;

    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(a[i][j]>mx)
                mx = a[i][j];
        }
    }

    // Second Largest Element

    int smx = INT_MIN;

    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(a[i][j]>smx && a[i][j]!=mx)
                smx = a[i][j];
        }
    }

    cout<<mx<<endl;
    cout<<smx;  // gives the second largest element from the 2D Array
}