#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row of Matrix : ";
    cin>>m;
    cout<<"Enter Column of Matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter Elements in Matrix : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Flip 1--> 0 And 0-->1
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(a[i][j]==0)  // Flip 0 to 1
                a[i][j] = 1;
            else // / Flip 1 to 0
                a[i][j] = 0;
        }
        cout<<endl;
    }
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}